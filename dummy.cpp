
#include <iostream>
#include <iterator>
#include <stdlib.h>
#include <list>
#include <vector>
#include <algorithm>
#include <functional>
#include <cmath>
#include <numeric>

auto density_mean(std::vector<float> input)
{
    // adding some comment for test
    std::transform(std::begin(input), std::end(input), std::begin(input), [](float f) { return -f; });
    std::sort(std::begin(input), std::end(input));
    std::transform(std::begin(input), std::end(input), std::begin(input), [](float f) { return std::log(-f); });

    if(input.size() > 8)
    {
        std::vector<float> density; density.reserve(input.size() - 2);
        std::vector<float> product; product.reserve(input.size() - 2);

        for(size_t i = 0; i < input.size() - 2; i++)
        {
            density.emplace_back(1. / (input[i] - input[i+2]));
            product.emplace_back(input[i+1] * density[i]);
        }

        return -std::exp(std::accumulate(std::begin(product), std::end(product), 0.)/std::accumulate(std::begin(density), std::end(density), 0.));
    }
    else
    {
        std::cout << "Density Elements must be > 8" << std::endl;
        return -1.;
    }
}


int main(void)
{
    std::vector<float> score_average = {1,4,2,3,5,6,7,8,9};
    double mean = density_mean(score_average);
    std::cout << "Mean: " << mean << std::endl;
}

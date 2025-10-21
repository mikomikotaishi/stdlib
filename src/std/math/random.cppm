/**
 * @file random.cppm
 * @module std.math.random
 * @brief Module file for standard library random number operations.
 *
 * This file contains the implementation of the random number operations in the standard library.
 */

module;

#ifdef STDLIB_NO_RESERVED_STD_MODULE
export module std.math.random;

import std.random;

#define RANDOM std::random
#else
export module stdlib.math.random;

import stdlib.random;

#define RANDOM stdlib::random
#endif

/**
 * @namespace std::math
 * @brief Wrapper namespace for standard library mathematical operations.
 */
#if defined(STDLIB_NO_RESERVED_STD_NAMESPACE) || defined(DOXYGEN)
export namespace std::math {
#else 
export namespace stdlib::math {
#endif
    /**
     * @namespace random
     * @brief Wrapper namespace for standard library numerical constants (for compatibility).
     */
    inline namespace random {
        using RANDOM::UniformRandomBitGenerator;
        using RANDOM::LinearCongruentialEngine;
        using RANDOM::MersenneTwisterEngine;
        using RANDOM::SubtractWithCarryEngine;
        using RANDOM::DiscardBlockEngine;
        using RANDOM::ShuffleOrderEngine;
        using RANDOM::MinimalStandardRand0;
        using RANDOM::MinimalStandardRand;
        using RANDOM::MersenneTwister19937;
        using RANDOM::MersenneTwister19937_64;
        using RANDOM::Ranlux24BaseEngine;
        using RANDOM::Ranlux48BaseEngine;
        using RANDOM::Ranlux24Engine;
        using RANDOM::Ranlux48Engine;
        using RANDOM::KnuthBGenerator;
        using RANDOM::RandomDevice;
        using RANDOM::UniformIntegerDistribution;
        using RANDOM::UniformRealDistribution;
        using RANDOM::BernoulliDistribution;
        using RANDOM::BinomialDistribution;
        using RANDOM::NegativeBinomialDistribution;
        using RANDOM::GeometricDistribution;
        using RANDOM::PoissonDistribution;
        using RANDOM::ExponentialDistribution;
        using RANDOM::GammaDistribution;
        using RANDOM::WeibullDistribution;
        using RANDOM::ExtremeValueDistribution;
        using RANDOM::NormalDistribution;
        using RANDOM::LogNormalDistribution;
        using RANDOM::ChiSquaredDistribution;
        using RANDOM::CauchyDistribution;
        using RANDOM::FisherFDistribution;
        using RANDOM::StudentTDistribution;
        using RANDOM::DiscreteDistribution;
        using RANDOM::PiecewiseLinearDistribution;
        using RANDOM::SeedSequence;
        
        using RANDOM::generate_canonical;

        #ifdef STDLIB_ENABLE_COMPAT_NAMES
        using RANDOM::MinStdRand0;
        using RANDOM::MinStdRand;
        using RANDOM::Mt19937;
        using RANDOM::Mt19937_64;
        using RANDOM::Ranlux24Base;
        using RANDOM::Ranlux48Base;
        using RANDOM::Ranlux24;
        using RANDOM::Ranlux48;
        using RANDOM::KnuthB;
        using RANDOM::SeedSeq;
        #endif
    }
}

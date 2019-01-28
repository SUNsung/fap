
        
            describe '-' do
      it 'left-justifies the result of conversion if width is specified' do
        format('%-10b', 10).should == '1010      '
        format('%-10B', 10).should == '1010      '
        format('%-10d', 112).should == '112       '
        format('%-10i', 112).should == '112       '
        format('%-10o', 87).should == '127       '
        format('%-10u', 112).should == '112       '
        format('%-10x', 196).should == 'c4        '
        format('%-10X', 196).should == 'C4        '
    
      it 'accepts a Fixnum' do
    sleep(0).should be_close(0, 2)
  end
    
      it 'accepts a Bignum as a seed' do
    srand(0x12345678901234567890)
    srand.should == 0x12345678901234567890
  end
    
      it 'raises #{frozen_error_class} on an untainted, frozen object' do
    o = Object.new.freeze
    lambda { o.taint }.should raise_error(frozen_error_class)
  end
    
    require_relative 'converter/fonts_conversion'
require_relative 'converter/less_conversion'
require_relative 'converter/js_conversion'
require_relative 'converter/logger'
require_relative 'converter/network'
    
      # Enable Rack::Cache to put a simple HTTP cache in front of your application
  # Add `rack-cache` to your Gemfile before enabling this.
  # For large-scale production use, consider using a caching reverse proxy like nginx, varnish or squid.
  # config.action_dispatch.rack_cache = true
    
      # Configure static asset server for tests with Cache-Control for performance.
  if config.respond_to?(:serve_static_files)
    # rails >= 4.2
    config.serve_static_files = true
  elsif config.respond_to?(:serve_static_assets)
    # rails < 4.2
    config.serve_static_assets = true
  end
  config.static_cache_control = 'public, max-age=3600'
    
          it 'allows closing brace on same line as multi-line element' do
        expect_no_offenses(construct(false, a, make_multi(multi), false))
      end
    
    module RuboCop
  module AST
    # A node extension for `for` nodes. This will be used in place of a plain
    # node when the builder constructs the AST, making its methods available
    # to all `for` nodes within RuboCop.
    class ForNode < Node
      # Returns the keyword of the `for` statement as a string.
      #
      # @return [String] the keyword of the `until` statement
      def keyword
        'for'
      end
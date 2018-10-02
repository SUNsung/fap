
        
          def post_superenv_hacks
    # Only allow Homebrew-approved directories into the PATH, unless
    # a formula opts-in to allowing the user's path.
    if formula.env.userpaths? || reqs.any? { |rq| rq.env.userpaths? }
      ENV.userpaths!
    end
  end
    
      def repo_var
    @repo_var ||= tap.path.to_s.
        strip_prefix(Tap::TAP_DIRECTORY.to_s).
        tr('^A-Za-z0-9', '_').
        upcase
  end
    
        def replace_fadein(less)
      less.gsub(/(?![\-$@.])fadein\((.*?),\s*(.*?)%\)/) { 'fade_in(#{$1}, #{$2.to_i / 100.0})' }
    end
    
        def get_json(url)
      JSON.parse get_file(url)
    end
  end
end

    
    When /^I (?:sign|log) in with password '([^']*)'( on the mobile website)?$/ do |password, mobile|
  @me.password = password
  automatic_login
  confirm_login mobile
end
    
    #   Copyright (c) 2010-2011, Diaspora Inc.  This file is
#   licensed under the Affero General Public License version 3 or later.  See
#   the COPYRIGHT file.
    
    # Exit cleanly from an early interrupt
Signal.trap('INT') { exit 1 }
    
      class OfflinePluginPackager
    LOGSTASH_DIR = 'logstash'
    DEPENDENCIES_DIR = ::File.join(LOGSTASH_DIR, 'dependencies')
    
      # Make sure we dont build this gem from a non jruby
  # environment.
  if RUBY_PLATFORM == 'java'
    gem.platform = 'java'
  else
    raise 'The logstash-core-api need to be build on jruby'
  end
end

    
        desc 'Halt all VM's involved in the acceptance test round'
    task :halt, :platform do |t, args|
      config   = PlatformConfig.new
      experimental = (ENV['LS_QA_EXPERIMENTAL_OS'].to_s.downcase || 'false') == 'true'
      machines = config.select_names_for(args[:platform], {'experimental' => experimental})
    
    module RuboCop
  module Cop
    # Common functionality for checking the closing brace of a literal is
    # either on the same line as the last contained elements, or a new line.
    module MultilineLiteralBraceLayout
      include ConfigurableEnforcedStyle
    
    RSpec.describe RuboCop::Cop::Layout::MultilineArrayBraceLayout, :config do
  subject(:cop) { described_class.new(config) }
    
    module RuboCop
  module AST
    # A node extension for `def` nodes. This will be used in place of a plain
    # node when the builder constructs the AST, making its methods available
    # to all `def` nodes within RuboCop.
    class DefNode < Node
      include ParameterizedNode
      include MethodIdentifierPredicates
    
          # Returns the operator for the `kwsplat` as a string.
      #
      # @return [String] the double splat operator
      def operator
        DOUBLE_SPLAT
      end
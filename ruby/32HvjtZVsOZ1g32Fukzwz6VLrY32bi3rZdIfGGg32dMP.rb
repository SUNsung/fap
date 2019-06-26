
        
          if ENV['HOMEBREW_INTEGRATION_TEST']
    command_name '#{ENV['HOMEBREW_INTEGRATION_TEST']} (#{$PROCESS_ID})'
    
        assert_raise(ArgumentError) { (0..10).step(0) { } }
    assert_raise(ArgumentError) { (0..).step(-1) { } }
    assert_raise(ArgumentError) { (0..).step(0) { } }
    
        private
    def some_method
    end
  end
    
    module TestIRB
  class TestColor < Test::Unit::TestCase
    CLEAR     = '\e[0m'
    BOLD      = '\e[1m'
    UNDERLINE = '\e[4m'
    REVERSE   = '\e[7m'
    RED       = '\e[31m'
    GREEN     = '\e[32m'
    YELLOW    = '\e[33m'
    BLUE      = '\e[34m'
    MAGENTA   = '\e[35m'
    CYAN      = '\e[36m'
    
    module RuboCop
  module AST
    # A node extension for `def` nodes. This will be used in place of a plain
    # node when the builder constructs the AST, making its methods available
    # to all `def` nodes within RuboCop.
    class DefNode < Node
      include ParameterizedNode
      include MethodIdentifierPredicates
    
    module RuboCop
  module Cop
    # This auto-corrects gem dependency order
    class OrderedGemCorrector
      extend OrderedGemNode
    
        if @attributes.include?(:prefix)
      installdir = staging_path(@attributes[:prefix])
    else
      installdir = staging_path
    end
    
      def to_s(format=nil)
    return super(format.nil? ? 'NAME-FULLVERSION.EXTENSION' : format)
  end # def to_s
end # class FPM::Package::FreeBSD

    
        File.write(build_path('build-info'), `pkg_info -X pkg_install | egrep '^(MACHINE_ARCH|OPSYS|OS_VERSION|PKGTOOLS_VERSION)'`)
    
        # Generate the package 'Prototype' file
    File.open('#{build_path}/Prototype', 'w') do |prototype|
      prototype.puts('i pkginfo')
      prototype.puts('i preinstall') if self.scripts['pre-install']
      prototype.puts('i postinstall') if self.scripts['post-install']
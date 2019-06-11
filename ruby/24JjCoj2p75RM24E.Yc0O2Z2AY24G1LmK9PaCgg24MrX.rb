
        
        lib = File.expand_path('../lib', __FILE__)
$LOAD_PATH.unshift(lib) unless $LOAD_PATH.include?(lib)
require 'capistrano/version'
    
          super
    end
    
          def value_or_default
        if response.empty?
          default
        else
          response
        end
      end
    
          def scm_name
        fetch(:scm)
      end
    
    # This example uses the API to create a package from local files
# it also creates necessary init-scripts and systemd files so our executable can be used as a service
    
      def self.default_prefix
    npm_prefix = safesystemout('npm', 'prefix', '-g').chomp
    if npm_prefix.count('\n') > 0
      raise FPM::InvalidPackageConfiguration, '`npm prefix -g` returned unexpected output.'
    elsif !File.directory?(npm_prefix)
      raise FPM::InvalidPackageConfiguration, '`npm prefix -g` returned a non-existent directory'
    end
    logger.info('Setting default npm install prefix', :prefix => npm_prefix)
    npm_prefix
  end
    
    # This provides PHP PEAR package support.
#
# This provides input support, but not output support.
class FPM::Package::PEAR < FPM::Package
  option '--package-name-prefix', 'PREFIX',
    'Name prefix for pear package', :default => 'php-pear'
    
    # Support for python packages.
#
# This supports input, but not output.
#
# Example:
#
#     # Download the django python package:
#     pkg = FPM::Package::Python.new
#     pkg.input('Django')
#
class FPM::Package::Python < FPM::Package
  # Flags '--foo' will be accessable  as attributes[:python_foo]
  option '--bin', 'PYTHON_EXECUTABLE',
    'The path to the python executable you wish to run.', :default => 'python'
  option '--easyinstall', 'EASYINSTALL_EXECUTABLE',
    'The path to the easy_install executable tool', :default => 'easy_install'
  option '--pip', 'PIP_EXECUTABLE',
    'The path to the pip executable tool. If not specified, easy_install ' \
    'is used instead', :default => nil
  option '--pypi', 'PYPI_URL',
    'PyPi Server uri for retrieving packages.',
    :default => 'https://pypi.python.org/simple'
  option '--package-prefix', 'NAMEPREFIX',
    '(DEPRECATED, use --package-name-prefix) Name to prefix the package ' \
    'name with.' do |value|
    logger.warn('Using deprecated flag: --package-prefix. Please use ' \
                 '--package-name-prefix')
    value
  end
  option '--package-name-prefix', 'PREFIX', 'Name to prefix the package ' \
    'name with.', :default => 'python'
  option '--fix-name', :flag, 'Should the target package name be prefixed?',
    :default => true
  option '--fix-dependencies', :flag, 'Should the package dependencies be ' \
    'prefixed?', :default => true
    
        # use dir to set stuff up properly, mainly so I don't have to reimplement
    # the chdir/prefix stuff special for tar.
    dir = convert(FPM::Package::Dir)
    if attributes[:chdir]
      dir.attributes[:chdir] = File.join(build_path, attributes[:chdir])
    else
      dir.attributes[:chdir] = build_path
    end
    
    module FPM; module Util; end; end
    
        def tmux_select_first_pane
      '#{project.tmux} select-pane -t #{tmux_window_target}.#{panes.first.index + project.pane_base_index}'
    end
    
      subject { instance }
    
    formatters = [
  SimpleCov::Formatter::HTMLFormatter,
  Coveralls::SimpleCov::Formatter
]
SimpleCov.formatter = SimpleCov::Formatter::MultiFormatter.new(formatters)
SimpleCov.start do
  add_filter 'vendor/cache'
end
    
            it 'returns two panes in an Array' do
          expect(window.panes).to match [
            a_pane.with(index: 0).and_commands('vim'),
            a_pane.with(index: 1).and_commands(command1, command2)
          ]
        end
      end
    end
  end
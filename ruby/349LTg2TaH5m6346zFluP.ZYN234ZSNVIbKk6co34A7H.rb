
        
        require 'active_support'
require 'active_support/core_ext/object/blank'
require 'minitest/autorun'
    
        class InvertibleRevertMigration < SilentMigration
      def change
        revert do
          create_table('horses') do |t|
            t.column :content, :text
            t.column :remind_at, :datetime
          end
        end
      end
    end
    
      p.option 'source', '-s', '--source [DIR]', 'Source directory (defaults to ./)'
  p.option 'destination', '-d', '--destination [DIR]',
    'Destination directory (defaults to ./_site)'
  p.option 'safe', '--safe', 'Safe mode (defaults to false)'
  p.option 'plugins_dir', '-p', '--plugins PLUGINS_DIR1[,PLUGINS_DIR2[,...]]', Array,
    'Plugins directory (defaults to ./_plugins)'
  p.option 'layouts_dir', '--layouts DIR', String,
    'Layouts directory (defaults to ./_layouts)'
  p.option 'profile', '--profile', 'Generate a Liquid rendering profile'
    
              theme.create!
          Jekyll.logger.info 'Your new Jekyll theme, #{theme.name.cyan},' \
                             ' is ready for you in #{theme.path.to_s.cyan}!'
          Jekyll.logger.info 'For help getting started, read #{theme.path}/README.md.'
        end
        # rubocop:enable Metrics/AbcSize
      end
    end
  end
end

    
      let(:unknown_object_json) do
    {
      '@context': 'https://www.w3.org/ns/activitystreams',
      id: 'https://example.com/actor/hello-world',
      type: 'Note',
      attributedTo: 'https://example.com/actor',
      content: 'Hello world',
      to: 'http://example.com/followers',
    }
  end
    
      # How the label text should be generated altogether with the required text.
  config.label_text = lambda { |label, required, explicit_label| '#{label} #{required}' }
    
          it 'should have the correct 'before_uninstall' trigger script' do
        insist { @rpm.tags[:triggername][2] } == 'test'
        insist { @rpm.tags[:triggerversion][2] } == ''
        # This specific check is broken in newer versions of rpm/rpmbuild? -Jordan
        #insist { @rpm.tags[:triggerflags][2] & (1 << 17)} == ( 1 << 17) # See FPM::Package::RPM#rpm_get_trigger_type
        #insist { @rpm.tags[:triggerindex][2] } == 2
        insist { @rpm.tags[:triggerscriptprog][2] } == '/bin/sh'
        insist { @rpm.tags[:triggerscripts][2] } == '#!/bin/sh\necho before_uninstall trigger executed'
      end
    
        before do
      # output a package, use it as the input, set the subject to that input
      # package. This helps ensure that we can write and read packages
      # properly.
      # The target file must not exist.
    
        input.conflicts += conflicts
    input.dependencies += dependencies
    input.provides += provides
    input.replaces += replaces
    input.config_files += config_files
    input.directories += directories
    
      # hash of scripts for maintainer/package scripts (postinstall, etc)
  #
  # The keys are :before_install, etc
  # The values are the text to use in the script.
  attr_accessor :scripts
    
        # control tar.
    begin
      write_pkginfo(control_path)
      write_control_scripts(control_path)
      tar_path(control_path, controltar_path)
    ensure
      FileUtils.rm_r(control_path)
    end
    
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
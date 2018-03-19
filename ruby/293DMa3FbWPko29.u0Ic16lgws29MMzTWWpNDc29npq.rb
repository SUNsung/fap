
        
              def self.authors
        ['gin0606']
      end
    
          # All available devices
      attr_accessor :devices
    
            expect(result).to eq('/usr/local/bin/cloc  --by-file --xml  --out=build/cloc.xml')
      end
    
          it 'increments the build number of the Xcode project' do
        Fastlane::FastFile.new.parse('lane :test do
          increment_build_number(xcodeproj: '.xcproject')
        end').runner.execute(:test)
    
          it 'automatically removes new lines from the version number' do
        Fastlane::FastFile.new.parse('lane :test do
          increment_version_number(version_number: '1.77.3\n', bump_type: 'major')
        end').runner.execute(:test)
    
            # Defines additional configuration keys to be available in the
        # Vagrantfile. The configuration class should be returned by a
        # block passed to this method. This is done to ensure that the class
        # is lazy loaded, so if your class inherits from any classes that
        # are specific to Vagrant 1.0, then the plugin can still be defined
        # without breaking anything in future versions of Vagrant.
        #
        # @param [String] name Configuration key.
        def self.config(name, scope=nil, &block)
          scope ||= :top
          components.configs[scope].register(name.to_sym, &block)
          nil
        end
    
            # Helper method to get access to the class variable. This is mostly
        # exposed for tests. This shouldn't be mucked with directly, since it's
        # structure may change at any time.
        def registered; @@registered; end
      end
    end
  end
end

    
    module Vagrant
  module Util
    class IO
      # The chunk size for reading from subprocess IO.
      READ_CHUNK_SIZE = 4096
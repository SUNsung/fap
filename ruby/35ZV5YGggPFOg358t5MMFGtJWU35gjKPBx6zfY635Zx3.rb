
        
              def parse(podspec_content)
        @podspec_content = podspec_content
        @version_match = @version_regex.match(@podspec_content)
        UI.user_error!('Could not find version in podspec content '#{@podspec_content}'') if @version_match.nil?
        @version_value = @version_match[:value]
      end
    
            options = []
        options += project_path_array
        options << '-sdk '#{config[:sdk]}'' if config[:sdk]
        options << '-derivedDataPath '#{derived_data_path}''
        options << '-resultBundlePath '#{result_bundle_path}'' if result_bundle_path
        options << config[:xcargs] if config[:xcargs]
        return options
      end
    
          # Enable current device.
      def enable!
        unless enabled?
          attr = client.enable_device!(self.id, self.udid, mac: self.platform == 'mac')
          initialize(attr)
        end
      end
    
            Supply.config = params # we already have the finished config
    
        class IpaAction < Action
      def self.is_supported?(platform)
        platform == :ios
      end
    
        def xcode_9_and_above_device_name_mappings
      {
        # snapshot in Xcode 9 saves screenshots with the SIMULATOR_DEVICE_NAME
        # which includes spaces
        'iPhone XS Max' => 'iPhone XS Max',
        'iPhone XS' => 'iPhone XS',
        'iPhone XR' => 'iPhone XR',
        'iPhone 8 Plus' => 'iPhone 8 Plus',
        'iPhone 8' => 'iPhone 8',
        'iPhone X' => 'iPhone X',
        'iPhone 7 Plus' => 'iPhone 7 Plus (5.5-Inch)',
        'iPhone 7' => 'iPhone 7 (4.7-Inch)',
        'iPhone 6s Plus' => 'iPhone 6s Plus (5.5-Inch)',
        'iPhone 6 Plus' => 'iPhone 6 Plus (5.5-Inch)',
        'iPhone 6s' => 'iPhone 6s (4.7-Inch)',
        'iPhone 6' => 'iPhone 6 (4.7-Inch)',
        'iPhone 5s' => 'iPhone 5s (4-Inch)',
        'iPhone 5' => 'iPhone 5 (4-Inch)',
        'iPhone SE' => 'iPhone SE',
        'iPhone 4s' => 'iPhone 4s (3.5-Inch)',
        'iPad 2' => 'iPad 2',
        'iPad Air 2' => 'iPad Air 2',
        'iPad Air' => 'iPad Air',
        'iPad (5th generation)' => 'iPad (5th generation)',
        'iPad Pro (9.7-inch)' => 'iPad Pro (9.7-inch)',
        'iPad Pro (9.7 inch)' => 'iPad Pro (9.7-inch)', # iOS 10.3.1 simulator
        'iPad Pro (10.5-inch)' => 'iPad Pro (10.5-inch)',
        'iPad Pro (11-inch)' => 'iPad Pro (11-inch)',
        'iPad Pro (12.9-inch) (3rd generation)' => 'iPad Pro (12.9-inch) (3rd generation)',
        'iPad Pro (12.9-inch) (2nd generation)' => 'iPad Pro (12.9-inch) (2nd generation)',
        'iPad Pro (12.9-inch)' => 'iPad Pro (12.9-inch)',
        'iPad Pro (12.9 inch)' => 'iPad Pro (12.9-inch)', # iOS 10.3.1 simulator
        'iPad Pro' => 'iPad Pro (12.9-inch)', # iOS 9.3 simulator
        'Apple TV 1080p' => 'Apple TV',
        'Apple TV 4K (at 1080p)' => 'Apple TV 4K (at 1080p)',
        'Apple TV 4K' => 'Apple TV 4K',
        'Apple TV' => 'Apple TV',
        'Mac' => 'Mac'
      }
    end
    
      spec.required_ruby_version = '>= 2.3.0'
    
          def test_off_event_arg
        ev = WIN32OLE_EVENT.new(@db)
        ev.on_event('WillConnect'){handler1}
        ev.off_event('WillConnect')
        @db.open
        message_loop
        assert_equal('', @event2)
      end
    
        # tainted stream causes tainted objects
    assert_equal(true, t.tainted?)
    y = Marshal.load(t)
    assert_equal(true, y.tainted?)
    assert_equal(true, y.first.tainted?)
    assert_equal(true, y.first.first.tainted?)
    
          assert_not_interned_error(c, :method, s, feature5079)
      assert_not_interned_error(c, :public_method, s, feature5079)
      assert_not_interned_error(c, :instance_method, s, feature5079)
      assert_not_interned_error(c, :public_instance_method, s, feature5079)
      assert_not_interned_error(c, :singleton_method, s, feature5079)
    end
    
    
class ScanError < StandardError; end
    
        gz.getc.should == '1'
    gz.getc.should == '2'
    gz.getc.should == '3'
    gz.getc.should == '4'
    gz.getc.should == '5'
  end
    
        gz.read 5
    gz.pos.should == 5
    
      it 'invokes seek method on the associated IO object' do
    # first, prepare the mock object:
    (obj = mock('io')).should_receive(:get_io).any_number_of_times.and_return(@io)
    def obj.read(args); get_io.read(args); end
    def obj.seek(pos, whence = 0)
      ScratchPad.record :seek
      get_io.seek(pos, whence)
    end
    
          def ensure_external_podspecs_present!
        return unless config.podfile
        config.podfile.dependencies.each do |dep|
          next if dep.external_source.nil?
          unless config.sandbox.specification(dep.root_name)
            raise Informative, 'You must run `pod install` first to ensure that the ' \
              'podspec for `#{dep.root_name}` has been fetched.'
          end
        end
      end
    end
  end
end

    
        it 'sets the Pods group\'s location path to ${PODS_ROOT}' do
      XCConfigIntegrator.integrate(@pod_bundle, [@target])
      @project['Pods'].path.should.equal @pod_bundle.relative_pods_root_path.to_s
    end
    
        it 'includes boolean values' do
      generator = Generator::InfoPlistFile.new('1.0.0', Platform.new(:ios, '6.0'))
      generator.send(:to_plist, 'MyDictionary' => { 'MyTrue' => true, 'MyFalse' => false
                                                  }).should == <<-PLIST
<?xml version='1.0' encoding='UTF-8'?>
<!DOCTYPE plist PUBLIC '-//Apple//DTD PLIST 1.0//EN' 'http://www.apple.com/DTDs/PropertyList-1.0.dtd'>
<plist version='1.0'>
<dict>
  <key>MyDictionary</key>
  <dict>
    <key>MyFalse</key>
    <false/>
    <key>MyTrue</key>
    <true/>
  </dict>
</dict>
</plist>
      PLIST
    end
    
    module Pod
  module UserInterface
    # Redirects GH-issues delegate callbacks to CocoaPods UI methods.
    #
    class InspectorReporter
      # Called just as the investigation has begun.
      # Lets the user know that it's looking for an issue.
      #
      # @param [query] String unused
      #
      # @param [GhInspector::Inspector] inspector
      #        The current inspector
      #
      # @return [void]
      #
      def inspector_started_query(_, inspector)
        UI.puts 'Looking for related issues on #{inspector.repo_owner}/#{inspector.repo_name}...'
      end
    
          def line_class(line)
        if line =~ /^@@/
          'gc'
        elsif line =~ /^\+/
          'gi'
        elsif line =~ /^\-/
          'gd'
        else
          ''
        end
      end
    
          def allow_uploads
        @allow_uploads
      end
    
          def upload_dest
        @upload_dest
      end
    
          def has_path
        !@path.nil?
      end
    
    ENV['RACK_ENV'] = 'test'
require 'gollum'
require 'gollum/app'
    
    context 'Precious::Helpers' do
  include Precious::Helpers
    
    is_travis = ENV['TRAVIS_OS_NAME'] && !ENV['TRAVIS_OS_NAME'].empty?
    
          # Read the first line (the hashbang line) of the django-admin.py script
      fd = File.new(path, 'r')
      topline = fd.readline
      fd.close
    
          # Read each line as a path
      File.new(inputs, 'r').each_line do |line|
        # Handle each line as if it were an argument
        input.input(line.strip)
      end
    end
    
            until(empty_records == 2)
    
    class FPM::Package::NPM < FPM::Package
  class << self
    include FPM::Util
  end
  # Flags '--foo' will be accessable  as attributes[:npm_foo]
  option '--bin', 'NPM_EXECUTABLE',
    'The path to the npm executable you wish to run.', :default => 'npm'
    
    # Support for self extracting sh files (.sh files)
#
# This class only supports output of packages.
#
# The sh package is a single sh file with a tar payload concatenated to the end.
# The script can unpack the tarball to install it and call optional post install scripts.
class FPM::Package::Sh < FPM::Package

        
              keys = Spaceship::Portal::Key.all
      expect(keys.size).to eq(2)
      expect(keys.sample).to be_instance_of(Spaceship::Portal::Key)
    end
  end
    
        # Gets the last git commit information formatted into a String by the provided
    # pretty format String. See the git-log documentation for valid format placeholders
    def self.last_git_commit_formatted_with(pretty_format, date_format = nil)
      command = ['git log -1']
      command << '--pretty=\'#{pretty_format}\''
      command << '--date=\'#{date_format}\'' if date_format
      Actions.sh(command.compact.join(' '), log: false).chomp
    rescue
      nil
    end
    
        class AdbHelper
      # Path to the adb binary
      attr_accessor :adb_path
    
            expect(result).to eq('/usr/local/bin/cloc  --by-file --xml  --out=build/cloc.xml MyCoolApp')
      end
    
          context('when the tag exists') do
        before do
          allow(Fastlane::Actions).to receive(:sh).with('git rev-parse -q --verify refs/tags/1.2.0 || true', { log: nil }).and_return('41215512353215321')
        end
    
          it 'pass a custom build number to the tool' do
        result = Fastlane::FastFile.new.parse('lane :test do
          increment_build_number(build_number: 24, xcodeproj: '.xcproject')
        end').runner.execute(:test)
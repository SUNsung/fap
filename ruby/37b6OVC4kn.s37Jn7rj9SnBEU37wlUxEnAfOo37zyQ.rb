
        
          # Asynchronously send an email
  class TestEmail < Jobs::Base
    
      def grant_moderation!
    set_permission('moderator', true)
  end
    
          it 'splits correctly' do
        expected = [
          'One',
          'Two',
          'Three',
          'Four Token',
          'Or',
          'Newlines',
          'Everywhere'
        ]
        expect(generator.split_keywords(keywords)).to eq(expected)
      end
    end
  end
end

    
          # Run a certain action
      def trigger(command: nil, serial: nil)
        android_serial = serial != '' ? 'ANDROID_SERIAL=#{serial}' : nil
        command = [android_serial, adb_path, command].join(' ')
        Action.sh(command)
      end
    
    module Fastlane
  class CrashlyticsProjectParser
    # @param project_file_path path to a .xcodeproj file
    def initialize(config = {})
      FastlaneCore::Project.detect_projects(config)
      @project = FastlaneCore::Project.new(config, xcodebuild_list_silent: true, xcodebuild_suppress_stderr: true)
    
          it 'does set the source directory' do
        result = Fastlane::FastFile.new.parse('lane :test do
            cloc(source_directory: 'MyCoolApp')
          end').runner.execute(:test)
    
              expect(result).to eq(true)
        end
      end
    
        def already_defined?
      connection.execute(<<~SQL).values.first.first
        SELECT EXISTS(
          SELECT * FROM pg_proc WHERE proname = 'timestamp_id'
        );
      SQL
    end
    
      def updated
    object.updated_at.iso8601
  end
    
        attributes :type, :href, :name
    
      before do
    sign_in user, scope: :user
  end
    
      def payload
    @_payload ||= request.body.read
  end
    
          expect('.border-color-all').to have_rule(rule)
    end
  end
    
        @buttons_list = %w(
      button
      [type='button']
      [type='reset']
      [type='submit']
    )
  end
    
    describe 'margin' do
  before(:all) do
    ParserSupport.parse_file('library/margin')
  end
    
      context 'called with null values' do
    it 'writes rules for others' do
      ruleset = 'position: static; ' +
                'top: 11px; ' +
                'left: 13px;'
      bad_rule = 'position-bottom: null; position-right: null;'
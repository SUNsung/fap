
        
                # Non Localised
        FastlaneCore::ConfigItem.new(key: :app_icon,
                                     description: 'Metadata: The path to the app icon',
                                     optional: true,
                                     short_option: '-l',
                                     verify_block: proc do |value|
                                       UI.user_error!('Could not find png file at path '#{File.expand_path(value)}'') unless File.exist?(value)
                                       UI.user_error!(''#{value}' doesn't seem to be one of the supported files. supported: #{Deliver::UploadAssets::SUPPORTED_ICON_EXTENSIONS.join(',')}') unless Deliver::UploadAssets::SUPPORTED_ICON_EXTENSIONS.include?(File.extname(value).downcase)
                                     end),
        FastlaneCore::ConfigItem.new(key: :apple_watch_app_icon,
                                     description: 'Metadata: The path to the Apple Watch app icon',
                                     optional: true,
                                     short_option: '-q',
                                     verify_block: proc do |value|
                                       UI.user_error!('Could not find png file at path '#{File.expand_path(value)}'') unless File.exist?(value)
                                       UI.user_error!(''#{value}' doesn't seem to be one of the supported files. supported: #{Deliver::UploadAssets::SUPPORTED_ICON_EXTENSIONS.join(',')}') unless Deliver::UploadAssets::SUPPORTED_ICON_EXTENSIONS.include?(File.extname(value).downcase)
                                     end),
        FastlaneCore::ConfigItem.new(key: :copyright,
                                     description: 'Metadata: The copyright notice',
                                     optional: true,
                                     is_string: true),
        FastlaneCore::ConfigItem.new(key: :primary_category,
                                     description: 'Metadata: The english name of the primary category (e.g. `Business`, `Books`)',
                                     optional: true,
                                     is_string: true),
        FastlaneCore::ConfigItem.new(key: :secondary_category,
                                     description: 'Metadata: The english name of the secondary category (e.g. `Business`, `Books`)',
                                     optional: true,
                                     is_string: true),
        FastlaneCore::ConfigItem.new(key: :primary_first_sub_category,
                                     description: 'Metadata: The english name of the primary first sub category (e.g. `Educational`, `Puzzle`)',
                                     optional: true,
                                     is_string: true),
        FastlaneCore::ConfigItem.new(key: :primary_second_sub_category,
                                     description: 'Metadata: The english name of the primary second sub category (e.g. `Educational`, `Puzzle`)',
                                     optional: true,
                                     is_string: true),
        FastlaneCore::ConfigItem.new(key: :secondary_first_sub_category,
                                     description: 'Metadata: The english name of the secondary first sub category (e.g. `Educational`, `Puzzle`)',
                                     optional: true,
                                     is_string: true),
        FastlaneCore::ConfigItem.new(key: :secondary_second_sub_category,
                                     description: 'Metadata: The english name of the secondary second sub category (e.g. `Educational`, `Puzzle`)',
                                     optional: true,
                                     is_string: true),
        FastlaneCore::ConfigItem.new(key: :trade_representative_contact_information,
                                     description: 'Metadata: A hash containing the trade representative contact information',
                                     optional: true,
                                     is_string: false,
                                     type: Hash),
        FastlaneCore::ConfigItem.new(key: :app_review_information,
                                     description: 'Metadata: A hash containing the review information',
                                     optional: true,
                                     is_string: false,
                                     type: Hash),
        FastlaneCore::ConfigItem.new(key: :app_review_attachment_file,
                                     description: 'Metadata: Path to the app review attachment file',
                                     optional: true,
                                     is_string: true),
        # Localised
        FastlaneCore::ConfigItem.new(key: :description,
                                     description: 'Metadata: The localised app description',
                                     optional: true,
                                     is_string: false),
        FastlaneCore::ConfigItem.new(key: :name,
                                     description: 'Metadata: The localised app name',
                                     optional: true,
                                     is_string: false),
        FastlaneCore::ConfigItem.new(key: :subtitle,
                                     description: 'Metadata: The localised app subtitle',
                                     optional: true,
                                     is_string: false,
                                     type: Hash,
                                     verify_block: proc do |value|
                                       UI.user_error!(':subtitle must be a hash, with the language being the key') unless value.kind_of?(Hash)
                                     end),
        FastlaneCore::ConfigItem.new(key: :keywords,
                                     description: 'Metadata: An array of localised keywords',
                                     optional: true,
                                     is_string: false,
                                     type: Hash,
                                     verify_block: proc do |value|
                                       UI.user_error!(':keywords must be a hash, with the language being the key') unless value.kind_of?(Hash)
                                       value.each do |language, keywords|
                                         # Auto-convert array to string
                                         keywords = keywords.join(', ') if keywords.kind_of?(Array)
                                         value[language] = keywords
    
          # Load localised data
      ignore_validation = options[:ignore_language_directory_validation]
      Loader.language_folders(options[:metadata_path], ignore_validation).each do |lang_folder|
        language = File.basename(lang_folder)
        (LOCALISED_VERSION_VALUES + LOCALISED_APP_VALUES).each do |key|
          path = File.join(lang_folder, '#{key}.txt')
          next unless File.exist?(path)
    
          def build_settings
        config = Snapshot.config
    
            return File.join(containing, file_name)
      end
    end
  end
end

    
      Match.environments.each do |env|
    describe ':#{env} option handling' do
      it 'can use the git_url short flag from tool options' do
        stub_commander_runner_args([env, '-r', 'git@github.com:you/your_repo.git'])
    
              # Store the number in the shared hash
          Actions.lane_context[SharedValues::BUILD_NUMBER] = build_number
        end
        return build_number
      rescue => ex
        return false if params[:hide_error_when_versioning_disabled]
        UI.error('Before being able to increment and read the version number from your Xcode project, you first need to setup your project properly. Please follow the guide at https://developer.apple.com/library/content/qa/qa1827/_index.html')
        raise ex
      end
    
            Actions.lane_context[SharedValues::MATCH_PROVISIONING_PROFILE_MAPPING] = mapping
      end
    
          def output_method?(node)
        _definee, method_name, _args, _body = *node
        method_name.to_s == 'output'
      end
    end
  end
end

    
      match do
    result = is_pane
    
      yield
    
        desc 'completions [arg1 arg2]', COMMANDS[:completions]
    
    describe Tmuxinator::Window do
  let(:project) { double }
  let(:panes) { ['vim', nil, 'top'] }
  let(:window_name) { 'editor' }
  let(:synchronize) { false }
  let(:yaml) do
    {
      window_name => {
        'pre' => [
          'echo 'I get run in each pane.  Before each pane command!'',
          nil
        ],
        'synchronize' => synchronize,
        'layout' => 'main-vertical',
        'panes' => panes
      }
    }
  end
  let(:yaml_root) do
    {
      'editor' => {
        'root' => '/project/override',
        'root?' => true,
        'pre' => [
          'echo 'I get run in each pane.  Before each pane command!'',
          nil
        ],
        'layout' => 'main-vertical',
        'panes' => panes
      }
    }
  end
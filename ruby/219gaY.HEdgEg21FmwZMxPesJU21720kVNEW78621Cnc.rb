
        
        require 'action_view/helpers/tags/collection_helpers'
    
              def field_type
            self.class.field_type
          end
      end
    end
  end
end

    
          def typecast(paths)
        paths.map do |path|
          case path
          when Pathname, String
            OptimizedFileSystemResolver.new path.to_s
          else
            path
          end
        end
      end
  end
end

    
        class TestHelpers < ActiveSupport::TestCase
      def setup
        @controller = AbstractHelpers.new
      end
    
        # Some actions have special handling in fast_file.rb, that means we can't directly call the action
    # but we have to use the same logic that is in fast_file.rb instead.
    # That's where this switch statement comes into play
    def run_action_requiring_special_handling(command: nil, parameter_map: nil, action_return_type: nil)
      action_return = nil
      closure_argument_value = nil # only used if the action uses it
    
          def self.description
        'This will add an annotated git tag to the current branch'
      end
    
          it 'adds create_html param to command' do
        result = Fastlane::FastFile.new.parse('lane :test do
          appledoc(
            project_name: 'Project Name',
            project_company: 'Company',
            input: 'input/dir',
            create_html: true
          )
        end').runner.execute(:test)
    
          it 'handles the exclude_dirs parameter with no elements correctly' do
        result = Fastlane::FastFile.new.parse('lane :test do
          ensure_no_debug_code(text: 'pry', path: '.', exclude_dirs: [])
        end').runner.execute(:test)
        expect(result).to eq('grep -RE 'pry' '#{File.absolute_path('./')}'')
      end
    
            expect(Open3).to receive(:capture3).with(cmd).and_return('')
        expect(FastlaneCore::CertChecker).to receive(:wwdr_keychain).and_return(keychain_name)
    
    # To avoid 'PR & Runs' for which tests don't pass, we want to make spec errors more visible
# The code below will run on Circle, parses the results in JSON and posts them to the PR as comment
containing_dir = ENV['CIRCLE_TEST_REPORTS'] || '.' # for local testing
file_path = File.join(containing_dir, 'rspec', 'fastlane-junit-results.xml')
    
    module Docs
  class Entry
    class Invalid < StandardError; end
    
        def initialize
      @pages = {}
    end
    
          def call(*)
        if @minute != Time.now.min
          @minute = Time.now.min
          @counter = 0
        end
    
              node.remove_attribute('path')
          node.remove_attribute('region')
          node.remove_attribute('linenums')
          node.remove_attribute('title')
          node.remove_attribute('language')
          node.remove_attribute('hidecopy')
          node.remove_attribute('class')
        end
    
            css('.c10', '.showcase', '.showcase-content', '.l-main-section', 'div.div', 'div[flex]', 'code-tabs', 'md-card', 'md-card-content', 'div:not([class])', 'footer', '.card-row', '.card-row-container', 'figure', 'blockquote', 'exported', 'defined', 'div.ng-scope', '.code-example header', 'section.desc', '.row', '.dart-api-entry-main', '.main-content', 'section.summary', 'span.signature').each do |node|
          node.before(node.children).remove
        end
    
          def after
        @versions[1][0..6]
      end
    
        @view = Precious::Views::Page.new
    @view.instance_variable_set :@page, page
    @view.instance_variable_set :@content, page.formatted_data
    @view.instance_variable_set :@h1_title, false
    
      teardown do
    FileUtils.rm_rf(@path)
  end
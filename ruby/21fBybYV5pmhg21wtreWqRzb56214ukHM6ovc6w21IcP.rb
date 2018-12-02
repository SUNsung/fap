
        
                  def value_came_from_user?
            method_name = '#{@method_name}_came_from_user?'
            !object.respond_to?(method_name) || object.public_send(method_name)
          end
    
        # Controls whether an action should be rendered using a layout.
    # If you want to disable any <tt>layout</tt> settings for the
    # current action so that it is rendered without a layout then
    # either override this method in your controller to return false
    # for that action or set the <tt>action_has_layout</tt> attribute
    # to false before rendering.
    def action_has_layout?
      @_action_has_layout
    end
    
        def find_all_with_query(query) # :nodoc:
      paths.each do |resolver|
        templates = resolver.find_all_with_query(query)
        return templates unless templates.empty?
      end
    
    # See chcase for an example
class ScriptFileFormula < Formula
  def install
    bin.install Dir['*']
  end
end
    
        # Symbol for the current platform
    attr_accessor :current_platform
    
            is_swift = FastlaneCore::FastlaneFolder.swift?
        fastlane_client_language = is_swift ? :swift : :ruby
        action_launch_context = FastlaneCore::ActionLaunchContext.context_for_action_name(@program[:name], fastlane_client_language: fastlane_client_language, args: ARGV)
        FastlaneCore.session.action_launched(launch_context: action_launch_context)
    
            result = Fastlane::FastFile.new.parse('lane :test do
          add_git_tag ({
            tag: '#{tag}',
            message: '#{message}'
          })
        end').runner.execute(:test)
    
          it 'handles the extensions parameter with no elements correctly' do
        result = Fastlane::FastFile.new.parse('lane :test do
          ensure_no_debug_code(text: 'pry', path: '.', extensions: [])
        end').runner.execute(:test)
        expect(result).to eq('grep -RE 'pry' '#{File.absolute_path('./')}'')
      end
    
          it 'generates the correct git command with a shell-escaped message' do
        message = 'message with 'quotes' (and parens)'
        result = Fastlane::FastFile.new.parse('lane :test do
          git_commit(path: './fastlane/README.md', message: \'#{message}\')
        end').runner.execute(:test)
        expect(result).to eq('git commit -m #{message.shellescape} ./fastlane/README.md')
      end
    end
  end
end

    
            keychain_path = File.expand_path(File.join('~', 'Library', 'Keychains', keychain))
        expected_command = 'security import #{cert_name} -k '#{keychain_path}' -P #{password} -T /usr/bin/codesign -T /usr/bin/security &> /dev/null'
    
          context 'with valid path to compile_commands.json' do
        context 'with no path to oclint' do
          let(:result) do
            Fastlane::FastFile.new.parse('lane :test do
              oclint( compile_commands: './fastlane/spec/fixtures/oclint/compile_commands.json' )
            end').runner.execute(:test)
          end
          let(:command) { 'cd #{File.expand_path('.').shellescape} && oclint -report-type=html -o=oclint_report.html' }
    
              expect(result).to eq('#{CUSTOM_EXECUTABLE_NAME} lint --strict')
        end
      end
    
            it 'returns Array input values correctly' do
          config_item = FastlaneCore::ConfigItem.new(key: :foo,
                                                     description: 'foo',
                                                     type: Array)
          config = FastlaneCore::Configuration.create([config_item], { foo: ['5', '4', '3', '2', '1'] })
    
    if git.modified_files.include?('snapshot/lib/assets/SnapshotHelper.swift')
  warn('You modified `SnapshotHelper.swift`, make sure to update the version number at the bottom of the file to notify users about the new helper file.')
end
    
      it 'creates an agent' do
    visit '/'
    page.find('a', text: 'Agents').trigger(:mouseover)
    click_on('New Agent')
    
        it 'outputs control links to agents within the incoming set, but not outside it' do
      agents(:jane_rain_notifier_agent).control_targets = [agents(:jane_weather_agent), agents(:jane_basecamp_agent)]
      agents(:jane_rain_notifier_agent).save!
    
    describe LiquidMigrator do
  describe 'converting JSONPath strings' do
    it 'should work' do
      expect(LiquidMigrator.convert_string('$.data', true)).to eq('{{data}}')
      expect(LiquidMigrator.convert_string('$.data.test', true)).to eq('{{data.test}}')
      expect(LiquidMigrator.convert_string('$first_title', true)).to eq('{{first_title}}')
    end
    
        # Get a all top-level selectors (with {)
    def get_css_selectors(css, opts = {})
      s         = CharStringScanner.new(css)
      selectors = []
      while s.scan_next(RULE_OPEN_BRACE_RE)
        brace_pos = s.pos
        def_pos   = css_def_pos(css, brace_pos+1, -1)
        sel       = css[def_pos.begin..brace_pos - 1].dup
        sel.strip! if opts[:strip]
        selectors << sel
        sel.dup.strip
        s.pos = close_brace_pos(css, brace_pos, 1) + 1
      end
      selectors
    end
    }
    
      def prefix_from_bin(bin_name)
    unless (path = `which #{bin_name}`.strip).empty?
      File.dirname(File.dirname(path))
    end
  end
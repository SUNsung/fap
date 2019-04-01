
        
            def suggest_ruby_reinstall(e)
      ui = FastlaneCore::UI
      ui.error('-----------------------------------------------------------------------')
      ui.error(e.to_s)
      ui.error('')
      ui.error('SSL errors can be caused by various components on your local machine.')
      if Gem::Version.new(RUBY_VERSION) < Gem::Version.new('2.1')
        ui.error('Apple has recently changed their servers to require TLS 1.2, which may')
        ui.error('not be available to your system installed Ruby (#{RUBY_VERSION})')
      end
      ui.error('')
      ui.error('The best solution is to use the self-contained fastlane version.')
      ui.error('Which ships with a bundled OpenSSL,ruby and all gems - so you don't depend on system libraries')
      ui.error(' - Use Homebrew')
      ui.error('    - update brew with `brew update`')
      ui.error('    - install fastlane using:')
      ui.error('      - `brew cask install fastlane`')
      ui.error(' - Use One-Click-Installer:')
      ui.error('    - download fastlane at https://download.fastlane.tools')
      ui.error('    - extract the archive and double click the `install`')
      ui.error('-----------------------------------------------------------')
      ui.error('for more details on ways to install fastlane please refer the documentation:')
      ui.error('-----------------------------------------------------------')
      ui.error('        🚀       https://docs.fastlane.tools          🚀   ')
      ui.error('-----------------------------------------------------------')
      ui.error('')
      ui.error('You can also install a new version of Ruby')
      ui.error('')
      ui.error('- Make sure OpenSSL is installed with Homebrew: `brew update && brew upgrade openssl`')
      ui.error('- If you use system Ruby:')
      ui.error('  - Run `brew update && brew install ruby`')
      ui.error('- If you use rbenv with ruby-build:')
      ui.error('  - Run `brew update && brew upgrade ruby-build && rbenv install 2.3.1`')
      ui.error('  - Run `rbenv global 2.3.1` to make it the new global default Ruby version')
      ui.error('- If you use rvm:')
      ui.error('  - First run `rvm osx-ssl-certs update all`')
      ui.error('  - Then run `rvm reinstall ruby-2.3.1 --with-openssl-dir=/usr/local`')
      ui.error('')
      ui.error('If that doesn't fix your issue, please google for the following error message:')
      ui.error('  '#{e}'')
      ui.error('-----------------------------------------------------------------------')
    end
    
            message = 'builds/test/#{build_number}#{postfix} (fastlane)'
        tag = 'builds/test/#{build_number}#{postfix}'
        expect(result).to eq('git tag -am #{message.shellescape} #{tag.shellescape}')
      end
    
        def doc_default_value
      return '[*](#parameters-legend-dynamic)' if self.default_value_dynamic
      return '' if self.default_value.nil?
      return '`''`' if self.default_value.instance_of?(String) && self.default_value.empty?
      return '`:#{self.default_value}`' if self.default_value.instance_of?(Symbol)
    
      it 'asks to accept conflicts when the scenario was modified' do
    DefaultScenarioImporter.seed(user)
    agent = user.agents.where(name: 'Rain Notifier').first
    agent.options['expected_receive_period_in_days'] = 9001
    agent.save!
    visit new_scenario_imports_path
    attach_file('Option 2: Upload a Scenario JSON File', File.join(Rails.root, 'data/default_scenario.json'))
    click_on 'Start Import'
    expect(page).to have_text('This Scenario already exists in your system.')
    expect(page).to have_text('9001')
    check('I confirm that I want to import these Agents.')
    click_on 'Finish Import'
    expect(page).to have_text('Import successful!')
  end
    
      describe '#dangerous?' do
    it 'returns false on most Agents' do
      expect(ScenarioImport.new(:data => valid_data)).not_to be_dangerous
    end
    
        it 'outputs a structure containing name, description, the date, all agents & their links' do
      data = exporter.as_json
      expect(data[:name]).to eq(name)
      expect(data[:description]).to eq(description)
      expect(data[:source_url]).to eq(source_url)
      expect(data[:guid]).to eq(guid)
      expect(data[:schema_version]).to eq(1)
      expect(data[:tag_fg_color]).to eq(tag_fg_color)
      expect(data[:tag_bg_color]).to eq(tag_bg_color)
      expect(data[:icon]).to eq(icon)
      expect(Time.parse(data[:exported_at])).to be_within(2).of(Time.now.utc)
      expect(data[:links]).to eq([{ :source => guid_order(agent_list, :jane_weather_agent), :receiver => guid_order(agent_list, :jane_rain_notifier_agent)}])
      expect(data[:control_links]).to eq([])
      expect(data[:agents]).to eq(agent_list.sort_by{|a| a.guid}.map { |agent| exporter.agent_as_json(agent) })
      expect(data[:agents].all? { |agent_json| agent_json[:guid].present? && agent_json[:type].present? && agent_json[:name].present? }).to be_truthy
    
      describe '#log_length' do
    it 'defaults to 200' do
      expect(AgentLog.log_length).to eq(200)
    end
  end
end

    
          # Returns the path to a file for the given key.
      #
      # @param key [String]
      # @return [String] The path to the cache file.
      def path_to(key)
        key = key.gsub(/[<>:\\|?*%]/) {|c| '%%%03d' % c.ord}
        File.join(cache_location, key)
      end
    end
  end
end

    
          # Almost any real Unix terminal will support color,
      # so we just filter for Windows terms (which don't set TERM)
      # and not-real terminals, which aren't ttys.
      return str if ENV['TERM'].nil? || ENV['TERM'].empty? || !STDOUT.tty?
      '\e[#{COLORS[color]}m#{str}\e[0m'
    end
    
          files.map! do |from, to|
        to ||= from.gsub(/\.[^.]*?$/, '.css')
        sourcemap = Sass::Util.sourcemap_name(to) if @options[:sourcemap]
        [from, to, sourcemap]
      end
      dirs.map! {|from, to| [from, to || from]}
      Sass::Plugin.options[:template_location] = dirs
    
          # Creates a new filesystem importer that imports files relative to a given path.
      #
      # @param root [String] The root path.
      #   This importer will import files relative to this path.
      def initialize(root)
        @root = File.expand_path(root)
        @real_root = Sass::Util.realpath(@root).to_s
        @same_name_warnings = Set.new
      end
    
          it 'detects closing brace on same line as last element' do
        src = construct(true, false)
        inspect_source(src)
    
          # Returns the collection the `for` loop is iterating over.
      #
      # @return [Node] The collection the `for` loop is iterating over
      def collection
        node_parts[1]
      end
    
          # Checks whether any of the key value pairs in the `hash` literal are on
      # the same line.
      #
      # @note A multiline `pair` is considered to be on the same line if it
      #       shares any of its lines with another `pair`
      #
      # @return [Boolean] whether any `pair` nodes are on the same line
      def pairs_on_same_line?
        pairs.each_cons(2).any? { |first, second| first.same_line?(second) }
      end
    
        def each_mentioned_cop
      each_directive do |comment, cop_names, disabled|
        comment_line_number = comment.loc.expression.line
        single_line = !comment_only_line?(comment_line_number)
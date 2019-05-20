
        
              it 'adds docset_bundle_filename param to command' do
        result = Fastlane::FastFile.new.parse('lane :test do
          appledoc(
            project_name: 'Project Name',
            project_company: 'Company',
            input: 'input/dir',
            docset_bundle_filename: 'DocSet bundle filename'
          )
        end').runner.execute(:test)
    
          it 'works given the path to compile_commands.json' do
        result = Fastlane::FastFile.new.parse('lane :test do
            oclint(
              compile_commands: './fastlane/spec/fixtures/oclint/compile_commands.json'
            )
          end').runner.execute(:test)
    
          it 'yields command output' do
        expect_command('ls', '-la', exitstatus: 1, output: 'Heeeelp! Something went wrong.')
        Fastlane::Actions.sh('ls', '-la') do |status, result|
          expect(status.exitstatus).to eq(1)
          expect(result).to eq('Heeeelp! Something went wrong.')
        end
      end
    
              value_detector.find_folders(options)
        end
    
          it 'splits correctly' do
        expected = ['One', 'Two', 'Three', 'Four Token']
        expect(generator.split_keywords(keywords)).to eq(expected)
      end
    end
    
      it 'requires a URL or file uplaod' do
    visit new_scenario_imports_path
    click_on 'Start Import'
    expect(page).to have_text('Please provide either a Scenario JSON File or a Public Scenario URL.')
  end
    
      describe 'DotHelper::DotDrawer' do
    describe '#id' do
      it 'properly escapes double quotaion and backslash' do
        expect(DotHelper::DotDrawer.draw(foo: '') {
          id('hello\\'')
        }).to eq(''hello\\\\\\''')
      end
    end
  end
end

    
        it 'updates Agents' last_error_log_at when an error is logged' do
      AgentLog.log_for_agent(agents(:jane_website_agent), 'some message', :level => 3, :outbound_event => events(:jane_website_agent_event))
      expect(agents(:jane_website_agent).reload.last_error_log_at).to be_nil
    
        def replace(index, name)
      @filters[assert_index(index)] = filter_const(name)
    end
    
        def ==(other)
      other.name == name && other.path == path && other.type == type
    end
    
        delegate :empty?, :blank?, to: :pages
    
            css('.content', 'article', '.api-header', 'section', '.instance-member').each do |node|
          node.before(node.children).remove
        end
    
      # GET /resource/unlock?unlock_token=abcdef
  def show
    self.resource = resource_class.unlock_access_by_token(params[:unlock_token])
    yield resource if block_given?
    
          def remember_me_is_active?(resource)
        return false unless resource.respond_to?(:remember_me)
        scope = Devise::Mapping.find_scope!(resource)
        _, token, generated_at = cookies.signed[remember_key(resource, scope)]
        resource.remember_me?(token, generated_at)
      end
    
        proxy = Devise::Hooks::Proxy.new(warden)
    
        # Gives the class the mapping points to.
    def to
      @klass.get
    end
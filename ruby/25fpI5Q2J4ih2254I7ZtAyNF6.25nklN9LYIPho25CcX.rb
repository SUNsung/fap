
        
              self.current_lane = lane.to_sym
      self.current_platform = (platform ? platform.to_sym : nil)
    
            cmd << ['-am #{message.shellescape}']
        cmd << '--force' if options[:force]
        cmd << '-s' if options[:sign]
        cmd << tag.shellescape
        cmd << options[:commit].to_s if options[:commit]
    
          it 'adds clean_output param to command' do
        result = Fastlane::FastFile.new.parse('lane :test do
          appledoc(
            project_name: 'Project Name',
            project_company: 'Company',
            input: 'input/dir',
            clean_output: true
          )
        end').runner.execute(:test)
    
            expect(result).to \
          eq('carthage update TestDependency')
      end
    
          it 'yields any error result' do
        expect_command('ls', '-la', exitstatus: 1)
        Fastlane::Actions.sh('ls', '-la') do |status, result|
          expect(status.exitstatus).to eq(1)
          expect(result).to be_empty
        end
      end
    
          @key = key
      @env_name = env_name
      @description = description
      @short_option = short_option
      @default_value = default_value
      @default_value_dynamic = default_value_dynamic
      @verify_block = verify_block
      @is_string = is_string
      @data_type = type
      @data_type = String if type == :shell_string
      @optional = optional
      @conflicting_options = conflicting_options
      @conflict_block = conflict_block
      @deprecated = deprecated
      @sensitive = sensitive
      @code_gen_sensitive = code_gen_sensitive || sensitive
      @allow_shell_conversion = (type == :shell_string)
      @display_in_shell = display_in_shell
      @skip_type_validation = skip_type_validation # sometimes we allow multiple types which causes type validation failures, e.g.: export_options in gym
    
            if mod
          if name == 'Index'
            return slug.split('/')[1..-2].join('/')
          elsif name == 'Angular'
            return slug.split('/').last.split('-').first
          end
        end
    
        it 'generates the contacts_json fixture', :fixture => true do
      json = bob.contacts.map { |c|
               ContactPresenter.new(c, bob).full_hash_with_person
             }.to_json
      save_fixture(json, 'contacts_json')
    end
  end
end

    
        it 'generates a jasmine fixture', fixture: true do
      session[:mobile_view] = true
      get :new, format: :mobile
      save_fixture(html_for('body'), 'conversations_new_mobile')
    end
  end
end

    
        it 'generates a jasmine fixture', :fixture => true do
      contact = alice.contact_for(bob.person)
      aspect = alice.aspects.create(:name => 'people')
      contact.aspects << aspect
      contact.save
      get :new, params: {person_id: bob.person.id}
      save_fixture(html_for('body'), 'status_message_new')
    end
  end
end

    
        it 'supports a limit per_page parameter' do
      2.times { FactoryGirl.create(:notification, :recipient => alice, :target => @post) }
      get :index, params: {per_page: 2}
      expect(assigns[:notifications].count).to eq(2)
    end
    
              expect {
            get :create, params: valid_params.merge(invite: {token: code.token})
          }.to change { code.reload.count }.by(-1)
        end
    
          it 'returns an empty array for a post visible to the user' do
        sign_in(bob, scope: :user)
        get :index, params: {post_id: @post.id}, format: :json
        expect(JSON.parse(response.body)).to eq([])
      end
    end
    
          expect('.border-style-implied-left').to have_rule(rule)
    end
  end
    
          expect('.margin-all').to have_rule(rule)
    end
  end
    
          expect('.padding-alternate').to have_rule(rule)
    end
  end
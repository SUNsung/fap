
        
            def value_for(user_id, date)
      GivenDailyLike.find_for(user_id, date).pluck(:likes_given)[0] || 0
    end
    
          it 'deactivates an existing user' do
        visit admin_users_path
        expect(page).to have_no_text('inactive')
        find(:css, 'a[href='/admin/users/#{users(:bob).id}/deactivate']').click
        expect(page).to have_text('inactive')
        users(:bob).reload
        expect(users(:bob)).not_to be_active
      end
    
      context 'with associated agents' do
    let!(:bob_scheduler_agent) {
      Agents::SchedulerAgent.create!(
        user: users(:bob),
        name: 'Example Scheduler',
        options: {
          'action' => 'run',
          'schedule' => '0 * * * *'
        },
      )
    }
    
        it 'strips punctuation' do
      expect(AgentsExporter.new(:name => 'foo,bar').filename).to eq('foo-bar.json')
    end
    
    describe LiquidMigrator do
  describe 'converting JSONPath strings' do
    it 'should work' do
      expect(LiquidMigrator.convert_string('$.data', true)).to eq('{{data}}')
      expect(LiquidMigrator.convert_string('$.data.test', true)).to eq('{{data.test}}')
      expect(LiquidMigrator.convert_string('$first_title', true)).to eq('{{first_title}}')
    end
    
        it 'accepts objects as well as strings' do
      log = AgentLog.log_for_agent(agents(:jane_website_agent), events(:bob_website_agent_event).payload)
      expect(log.message).to include(''title'=>'foo'')
    end
  end
    
        def sort_fn(a, b)
      if (a.getbyte(0) >= 49 && a.getbyte(0) <= 57) || (b.getbyte(0) >= 49 && b.getbyte(0) <= 57)
        a_split = a.split(SPLIT_INTS)
        b_split = b.split(SPLIT_INTS)
    
        def name=(value)
      @name = value.try :strip
    end
    
        delegate :empty?, :blank?, to: :pages
    
          str.truncate(max_length).ljust(max_length) << tag.to_s
    end
    
        def translation_scope
      'devise.unlocks'
    end
end

    
        if record.timedout?(last_request_at) &&
        !env['devise.skip_timeout'] &&
        !proxy.remember_me_is_active?(record)
      Devise.sign_out_all_scopes ? proxy.sign_out : proxy.sign_out(scope)
      throw :warden, scope: scope, message: :timeout
    end
    
          def mailer_reply_to(mapping)
        mailer_sender(mapping, :reply_to)
      end
    
              def #{accessor}=(value)
            @#{accessor} = value
          end
        METHOD
      end
    end
    
      # A identifier representing the license. Any string is fine.
  attr_accessor :license
    
          until(file.eof?() || empty_records == 2)
    
      dont_obsolete_paths = []
  option '--dont-obsolete', 'DONT_OBSOLETE_PATH',
    'A file path for which to 'dont-obsolete' in the built PackageInfo. ' \
    'Can be specified multiple times.' do |path|
      dont_obsolete_paths << path
    end
    
        File.write(build_path('packlist'), files.sort.join('\n'))
    
        scripts[:after_install] = template(File.join('pleaserun', 'scripts', 'after-install.sh')).result(binding)
    scripts[:before_remove] = template(File.join('pleaserun', 'scripts', 'before-remove.sh')).result(binding)
  end # def input
    
        if File.exists?(params[:output])
      # TODO(sissel): Allow folks to choose output?
      logger.error('Puppet module directory '#{params[:output]}' already ' \
                    'exists. Delete it or choose another output (-p flag)')
    end
    
      # Returns the path to the tar file containing the packed up staging directory
  def payload
    payload_tar = build_path('payload.tar')
    logger.info('Creating payload tar ', :path => payload_tar)
    
          case
      when value.is_a?(String), value.is_a?(Symbol)
        %W(--#{opt} #{value})
      when value.is_a?(Array)
        value.map { |v| %W(--#{opt} #{v}) }
      when value.is_a?(TrueClass)
        '--#{opt}'
      when value.is_a?(FalseClass)
        '--no-#{opt}'
      else
        fail TypeError, 'Unexpected type: #{value.class}'
      end
    end
  end
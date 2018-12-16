
        
              dt = Date.today
      freeze_time dt
    
      it 'correctly sets notification level' do
    moderator = Fabricate(:moderator)
    
    Group.user_trust_level_change!(-1, TrustLevel[4])
    
          # The minimum number of requests we want to keep available.
      #
      # We don't use a value of 0 as multiple threads may be using the same
      # token in parallel. This could result in all of them hitting the GitHub
      # rate limit at once. The threshold is put in place to not hit the limit
      # in most cases.
      RATE_LIMIT_THRESHOLD = 50
    
            # Builds an issue from a GitHub API response.
        #
        # issue - An instance of `Sawyer::Resource` containing the issue
        #         details.
        def self.from_api_response(issue)
          user =
            if issue.user
              Representation::User.from_api_response(issue.user)
            end
    
            attr_reader :attributes
    
            # Builds a user from a GitHub API response.
        #
        # user - An instance of `Sawyer::Resource` containing the user details.
        def self.from_api_response(user)
          new(id: user.id, login: user.login)
        end
    
        it 'shows the dry run pop up without previous events and selects the events tab when a event was created' do
      open_dry_run_modal(agent)
      click_on('Dry Run')
      expect(page).to have_text('Biologists play reverse')
      expect(page).to have_selector(:css, 'li[role='presentation'].active a[href='#tabEvents']')
    end
    
      it 'requires a URL or file uplaod' do
    visit new_scenario_imports_path
    click_on 'Start Import'
    expect(page).to have_text('Please provide either a Scenario JSON File or a Public Scenario URL.')
  end
    
      describe '#status' do
    it 'works for failed jobs' do
      job.failed_at = Time.now
      expect(status(job)).to eq('<span class='label label-danger'>failed</span>')
    end
    
      describe 'migrating a hash' do
    it 'should convert every attribute' do
      expect(LiquidMigrator.convert_hash({'a' => '$.data', 'b' => 'This is a <$.test>'})).to eq(
                                  {'a' => '$.data', 'b' => 'This is a {{test}}'}
      )
    end
    it 'should work with leading_dollarsign_is_jsonpath' do
      expect(LiquidMigrator.convert_hash({'a' => '$.data', 'b' => 'This is a <$.test>'}, leading_dollarsign_is_jsonpath: true)).to eq(
                                  {'a' => '{{data}}', 'b' => 'This is a {{test}}'}
      )
    end
    it 'should use the corresponding *_path attributes when using merge_path_attributes'do
      expect(LiquidMigrator.convert_hash({'a' => 'default', 'a_path' => '$.data'}, {leading_dollarsign_is_jsonpath: true, merge_path_attributes: true})).to eq(
                                  {'a' => '{{data}}'}
      )
    end
    it 'should raise an exception when encountering complex JSONPaths' do
      expect { LiquidMigrator.convert_hash({'b' => 'This is <$.complex[2]>'}) }.
        to raise_error('JSONPath '$.complex[2]' is too complex, please check your migration.')
    end
  end
    
        it 'returns nil when passed nil' do
      expect(Utils.parse_duration(nil)).to be_nil
    end
    
    describe ConvertWebsiteAgentTemplateForMerge do
  let :old_extract do
    {
      'url' => { 'css' => '#comic img', 'value' => '@src' },
      'title' => { 'css' => '#comic img', 'value' => '@alt' },
      'hovertext' => { 'css' => '#comic img', 'value' => '@title' }
    }
  end
    
            receiver = Agents::CannotBeScheduled.new(
           :name => 'Receiving Agent',
        )
        receiver.propagate_immediately = true
        receiver.user = users(:bob)
        receiver.sources << sender
        receiver.save!
    
          alias default_reaction deny
    
    module Rack
  module Protection
    ##
    # Prevented attack::   Cookie Tossing
    # Supported browsers:: all
    # More infos::         https://github.com/blog/1466-yummy-cookies-across-domains
    #
    # Does not accept HTTP requests if the HTTP_COOKIE header contains more than one
    # session cookie. This does not protect against a cookie overflow attack.
    #
    # Options:
    #
    # session_key:: The name of the session cookie (default: 'rack.session')
    class CookieTossing < Base
      default_reaction :deny
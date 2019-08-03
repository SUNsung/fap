
        
          def new_topic_poster_for(user)
    topic_poster = TopicPoster.new
    topic_poster.user = user
    topic_poster.description = descriptions_for(user)
    topic_poster.primary_group = primary_group_lookup[user.id]
    if topic.last_post_user_id == user.id
      topic_poster.extras = +'latest'
      topic_poster.extras << ' single' if user_ids.uniq.size == 1
    end
    topic_poster
  end
    
      def override_translation(locale, key, value)
    expect(I18n.exists?(key, locale)).to eq(true)
    override = TranslationOverride.upsert!(locale, key, value)
    expect(override.persisted?).to eq(true)
  end
    
        render json: success_json.merge!(usernames: users.pluck(:username))
  end
    
                tag_name = DiscourseTagging.clean_tag(row[0])
            tag_group_name = row[1] || nil
    
          it 'activates an existing user' do
        users(:bob).deactivate!
        visit admin_users_path
        find(:css, 'a[href='/admin/users/#{users(:bob).id}/activate']').click
        expect(page).to have_no_text('inactive')
        users(:bob).reload
        expect(users(:bob)).to be_active
      end
    end
  end
end

    
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
    
        it 'returns a correct icon tag for other services' do
      icon = omniauth_provider_icon(:'37signals')
      expect(icon).to be_html_safe
      elem = Nokogiri(icon).at('i.fa.fa-lock')
      expect(elem).to be_a Nokogiri::XML::Element
    end
  end
    
        it 'respects an environment variable that specifies a path or URL to a different scenario' do
      stub.proxy(ENV).[](anything)
      stub(ENV).[]('DEFAULT_SCENARIO_FILE') { File.join(Rails.root, 'spec', 'fixtures', 'test_default_scenario.json') }
      expect { DefaultScenarioImporter.seed(user) }.to change(user.agents, :count).by(3)
    end
    
              expect(weather_agent.name).to eq('a weather agent')
          expect(weather_agent.schedule).to eq('5pm')
          expect(weather_agent.keep_events_for).to eq(14.days)
          expect(weather_agent.propagate_immediately).to be_falsey
          expect(weather_agent).to be_disabled
          expect(weather_agent.memory).to be_empty
          expect(weather_agent.options).to eq(weather_agent_options)
    
          Utils.sort_tuples!(tuples, orders)
      expect(tuples).to eq expected
    end
  end
    
      describe '#that checker should be valid' do
    it 'should check that the aftership object is valid' do
      expect(@checker).to be_valid
    end
    
        def pos=(i)
      @s.pos = str_to_byte_pos i
      i
    end
    
      # Force all access to the app over SSL, use Strict-Transport-Security, and use secure cookies.
  # config.force_ssl = true
    
      end
    
          rescue_from JSON::JWS::VerificationFailed do |e|
        logger.info e.backtrace[0, 10].join('\n')
        handle_params_error('bad_request', e.message)
      end
    
          def validation_fail_redirect_uri(e)
        render json: {error: :invalid_redirect_uri, error_description: e.message}, status: 400
      end
    end
  end
end

    
      def contacts_by_aspect(aspect_id)
    contacts = current_user.contacts.arel_table
    aspect_memberships = AspectMembership.arel_table
    current_user.contacts.joins(
      contacts.outer_join(aspect_memberships).on(
        aspect_memberships[:aspect_id].eq(aspect_id).and(
          aspect_memberships[:contact_id].eq(contacts[:id])
        )
      ).join_sources
    )
  end
    
        opts = params.require(:conversation).permit(:subject)
    opts[:participant_ids] = person_ids
    opts[:message] = { text: params[:conversation][:text] }
    @conversation = current_user.build_conversation(opts)
    
          <div id='post'>
        <h3 id='post-info'>POST</h3>
        <% if req.POST and not req.POST.empty? %>
          <table class='req'>
            <tr>
              <th>Variable</th>
              <th>Value</th>
            </tr>
            <% req.POST.sort_by { |k, v| k.to_s }.each { |key, val| %>
            <tr>
              <td><%=h key %></td>
              <td class='code'><div><%=h val.inspect %></div></td>
            </tr>
            <% } %>
          </table>
        <% else %>
          <p class='no-data'>No POST data.</p>
        <% end %>
        <div class='clear'></div>
      </div> <!-- /POST -->
    <% end %>
    
    begin
  require 'bundler'
  Bundler::GemHelper.install_tasks
rescue LoadError => e
  $stderr.puts e
end
    
            # Set these key values to boolean 'true' to include in policy
        NO_ARG_DIRECTIVES.each do |d|
          if options.key?(d) && options[d].is_a?(TrueClass)
            directives << d.to_s.sub(/_/, '-')
          end
        end
    
    module Rack
  module Protection
    ##
    # Prevented attack::   XSS
    # Supported browsers:: all
    # More infos::         http://en.wikipedia.org/wiki/Cross-site_scripting
    #
    # Automatically escapes Rack::Request#params so they can be embedded in HTML
    # or JavaScript without any further issues. Calls +html_safe+ on the escaped
    # strings if defined, to avoid double-escaping in Rails.
    #
    # Options:
    # escape:: What escaping modes to use, should be Symbol or Array of Symbols.
    #          Available: :html (default), :javascript, :url
    class EscapedParams < Base
      extend Rack::Utils
    
        it 'Reads referrer from Host header when Referer header is relative' do
      env = {'HTTP_HOST' => 'foo.com', 'HTTP_REFERER' => '/valid'}
      expect(subject.referrer(env)).to eq('foo.com')
    end
    
          def string_to_code string
        # sha bytes
        b = [Digest::SHA1.hexdigest(string)[0, 20]].pack('H*').bytes.to_a
        # Thanks donpark's IdenticonUtil.java for this.
        # Match the following Java code
        # ((b[0] & 0xFF) << 24) | ((b[1] & 0xFF) << 16) |
        #	 ((b[2] & 0xFF) << 8) | (b[3] & 0xFF)
    
        end
  end
end

    
          def has_toc
        !@toc_content.nil?
      end
    
      test 'redirects from 'base_path' or 'base_path/' to 'base_path/Home'' do
    Precious::App.set(:wiki_options, {})
    get '/'
    assert_match 'http://example.org/Home', last_response.headers['Location']
    
      test 'extracting paths from URLs' do
    assert_nil extract_path('Eye-Of-Sauron')
    assert_equal 'Mordor', extract_path('Mordor/Sauron')
    assert_equal 'Mordor/Sauron', extract_path('Mordor/Sauron/Evil')
  end
    
    def version
  line = File.read('lib/#{name}.rb')[/^\s*VERSION\s*=\s*.*/]
  line.match(/.*VERSION\s*=\s*[''](.*)['']/)[1]
end
    
      s.add_dependency 'gollum-lib', '~> 4.2', '>= 4.2.10'
  s.add_dependency 'kramdown', '~> 1.9.0'
  s.add_dependency 'sinatra', '~> 1.4', '>= 1.4.4'
  s.add_dependency 'mustache', ['>= 0.99.5', '< 1.0.0']
  s.add_dependency 'useragent', '~> 0.16.2'
  s.add_dependency 'gemojione', '~> 3.2'
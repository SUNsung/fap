
        
        require 'action_view/helpers/tags/collection_helpers'
    
    require 'active_support/core_ext/time/calculations'
    
          test 'when layout is specified as a proc without parameters it works just the same' do
        controller = WithZeroArityProc.new
        controller.process(:index)
        assert_equal 'Overwrite Hello zero arity proc!', controller.response_body
      end
    
    Benchmark.ips do |x|
  x.report('local-require') { local_require }
  x.report('global-require') { global_require }
  x.report('graceful-require') { graceful_require }
  x.compare!
end

    
        private
    
    class Discourse::Cors
  ORIGINS_ENV = 'Discourse_Cors_Origins'
    
        since =
      case period_type
      when :daily then 1.day.ago
      when :weekly then 1.week.ago
      when :monthly then 1.month.ago
      when :quarterly then 3.months.ago
      when :yearly then 1.year.ago
      else 1000.years.ago
      end
    
        it 'no-ops on invalid values' do
      previous = builder.build
    
        def site_setting_extension
      { script_src: SiteSetting.content_security_policy_script_src.split('|') }
    end
    
      private
    
        {
      status: status,
      is_crawler: helper.is_crawler?,
      has_auth_cookie: helper.has_auth_cookie?,
      is_background: !!(request.path =~ /^\/message-bus\// || request.path =~ /\/topics\/timings/),
      is_mobile: helper.is_mobile?,
      track_view: track_view,
      timing: timing,
      queue_seconds: env['REQUEST_QUEUE_SECONDS']
    }.tap do |h|
      h[:user_agent] = env['HTTP_USER_AGENT'] if h[:is_crawler]
    end
  end
    
        svg_subset = '''<!--
Discourse SVG subset of Font Awesome Free by @fontawesome - https://fontawesome.com
License - https://fontawesome.com/license/free (Icons: CC BY 4.0, Fonts: SIL OFL 1.1, Code: MIT License)
-->
<svg xmlns='http://www.w3.org/2000/svg' style='display: none;'>
'''.dup
    
    describe Admin::UsersController do
  it 'requires to be signed in as an admin' do
    login_as(users(:bob))
    visit admin_users_path
    expect(page).to have_text('Admin access required to view that page.')
  end
    
        it 'should ignore strings which just contain a JSONPath' do
      expect(LiquidMigrator.convert_string('$.data')).to eq('$.data')
      expect(LiquidMigrator.convert_string('$first_title')).to eq('$first_title')
      expect(LiquidMigrator.convert_string(' $.data', true)).to eq(' $.data')
      expect(LiquidMigrator.convert_string('lorem $.data', true)).to eq('lorem $.data')
    end
    it 'should raise an exception when encountering complex JSONPaths' do
      expect { LiquidMigrator.convert_string('$.data.test.*', true) }.
        to raise_error('JSONPath '$.data.test.*' is too complex, please check your migration.')
    end
  end
    
      describe 'up' do
    it 'should update extract and template options for an existing WebsiteAgent' do
      expect(agent.options).to include('extract' => old_extract,
                                       'template' => old_template)
      ConvertWebsiteAgentTemplateForMerge.new.up
      agent.reload
      expect(agent.options).to include('extract' => new_extract,
                                       'template' => new_template)
    end
  end
    
        it 'updates Agents' last_error_log_at when an error is logged' do
      AgentLog.log_for_agent(agents(:jane_website_agent), 'some message', :level => 3, :outbound_event => events(:jane_website_agent_event))
      expect(agents(:jane_website_agent).reload.last_error_log_at).to be_nil
    
    # This is basically a copy of the original bundler 'bundle' shim
# with the addition of the loading of our Bundler patches that
# modify Bundler's caching behaviour.
    
    class LogStash::PluginManager::Unpack < LogStash::PluginManager::PackCommand
  option '--tgz', :flag, 'unpack a packaged tar.gz file', :default => !LogStash::Environment.windows?
  option '--zip', :flag, 'unpack a packaged  zip file', :default => LogStash::Environment.windows?
    
          def page_name
        @name.gsub('-', ' ')
      end
    
      test 'creating page is blocked' do
    Precious::App.set(:wiki_options, { allow_editing: false})
    post '/create', :content => 'abc', :page => 'D',
         :format             => 'markdown', :message => 'def'
    assert !last_response.ok?
    
      s.add_dependency 'gollum-lib', '~> 4.2', '>= 4.2.10'
  s.add_dependency 'kramdown', '~> 1.9.0'
  s.add_dependency 'sinatra', '~> 1.4', '>= 1.4.4'
  s.add_dependency 'mustache', ['>= 0.99.5', '< 1.0.0']
  s.add_dependency 'useragent', '~> 0.16.2'
  s.add_dependency 'gemojione', '~> 3.2'
    
            if obj && obj.errors[method].present?
          errors = safe_join(obj.errors[method], '<br />'.html_safe)
          content_tag(:span, errors, class: 'formError')
        else
          ''
        end
      end
    
            def line_item_params
          params.require(:line_item).permit(:quantity, :variant_id, options: line_item_options)
        end
      end
    end
  end
end

    
                render_order(result)
          end
    
      # Raise exceptions instead of rendering exception templates.
  config.action_dispatch.show_exceptions = false

        
                  def render_component(builder)
            builder.radio_button + builder.label
          end
      end
    end
  end
end

    
              def default_datetime(options)
            return if options[:include_blank] || options[:prompt]
    
              super(object_name, method_name, template_object, options)
        end
    
                conditions = _layout_conditions
    
        initializer 'action_view.form_with_generates_remote_forms' do |app|
      ActiveSupport.on_load(:action_view) do
        form_with_generates_remote_forms = app.config.action_view.delete(:form_with_generates_remote_forms)
        ActionView::Helpers::FormHelper.form_with_generates_remote_forms = form_with_generates_remote_forms
      end
    end
    
    DATA = {'foo'=>'bar', 'alpha'=>{'beta'=>'gamma'}, 'lipsum'=>['lorem', 'ipsum', 'dolor']}
    
    # -------------------------------------------------------------------
# Benchmarking changes in https://github.com/jekyll/jekyll/pull/6767
# -------------------------------------------------------------------
    
    CONTENT_CONTAINING = <<-HTML.freeze
<!DOCTYPE HTML>
<html lang='en-US'>
  <head>
<meta http-equiv='Content-Type' content='text/html; charset=UTF-8'>
    <meta charset='UTF-8'>
    <title>Jemoji</title>
    <meta name='viewport' content='width=device-width,initial-scale=1'>
    <link rel='stylesheet' href='/css/screen.css'>
  </head>
  <body class='wrap'>
    <p><img class='emoji' title=':+1:' alt=':+1:' src='https://assets.github.com/images/icons/emoji/unicode/1f44d.png' height='20' width='20' align='absmiddle'></p>
    
    #
    
    module Jekyll
  module Commands
    class NewTheme < Jekyll::Command
      class << self
        def init_with_program(prog)
          prog.command(:'new-theme') do |c|
            c.syntax 'new-theme NAME'
            c.description 'Creates a new Jekyll theme scaffold'
            c.option 'code_of_conduct', \
                     '-c', '--code-of-conduct', \
                     'Include a Code of Conduct. (defaults to false)'
    
        def no_subcommand(args)
      unless args.empty? ||
          args.first !~ %r(!/^--/!) || %w(--help --version).include?(args.first)
        deprecation_message 'Jekyll now uses subcommands instead of just switches. \
                          Run `jekyll help` to find out more.'
        abort
      end
    end
    
        it 'does not send previously configured control targets when the current agent does not support them' do
      select_agent_type('Commander Agent')
      select2('SF Weather', from: 'Control targets')
      select_agent_type('Webhook Agent')
      fill_in(:agent_name, with: 'No control targets')
      click_on 'Save'
      expect(page).to have_content('No control targets')
      agent = Agent.find_by(name: 'No control targets')
      expect(agent.control_targets).to eq([])
    end
    
            it 'does not change Jane's scenario' do
          expect {
            scenario_import.import(:skip_agents => true)
          }.not_to change { users(:jane).scenarios }
          expect(users(:jane).scenarios.find_by(guid: guid)).to eq(existing_scenario)
        end
      end
    end
    
          expect(exporter.as_json[:control_links]).to eq([{ :controller => guid_order(agent_list, :jane_rain_notifier_agent), :control_target => guid_order(agent_list, :jane_weather_agent) }])
    end
  end
    
        stub.any_instance_of(Agents::SchedulerAgent).second_precision_enabled { true }
    
          Utils.sort_tuples!(tuples)
      expect(tuples).to eq expected
    end
    
          AgentLog.log_for_agent(agents(:jane_website_agent), 'some message', :level => 4, :outbound_event => events(:jane_website_agent_event))
      expect(agents(:jane_website_agent).reload.last_error_log_at.to_i).to be_within(2).of(Time.now.to_i)
    end
    
      namespace :release do
    GEMS_AND_ROOT_DIRECTORIES.each do |gem, directory|
      desc 'Release #{gem} as a package'
      task gem => 'package:#{gem}' do
        sh <<-SH
          gem install #{package(gem, '.gem')} --local &&
          gem push #{package(gem, '.gem')}
        SH
      end
    end
    
      File.open('rack-protection.gemspec', 'w') { |f| f << content }
end
    
            # Set these key values to boolean 'true' to include in policy
        NO_ARG_DIRECTIVES.each do |d|
          if options.key?(d) && options[d].is_a?(TrueClass)
            directives << d.to_s.sub(/_/, '-')
          end
        end
    
          def accepts?(env)
        cookie_header = env['HTTP_COOKIE']
        cookies = Rack::Utils.parse_query(cookie_header, ';,') { |s| s }
        cookies.each do |k, v|
          if k == session_key && Array(v).size > 1
            bad_cookies << k
          elsif k != session_key && Rack::Utils.unescape(k) == session_key
            bad_cookies << k
          end
        end
        bad_cookies.empty?
      end

        
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
    
        it 'works for running jobs' do
      job.locked_at = Time.now
      job.locked_by = 'test'
      expect(status(job)).to eq('<span class='label label-info'>running</span>')
    end
    
          context '#restart_dead_workers' do
        before do
          mock.instance_of(HuginnScheduler).run!
          mock.instance_of(DelayedJobWorker).run!
          @agent_runner.send(:run_workers)
    
          expect(data[:agents][guid_order(agent_list, :jane_weather_agent)]).not_to have_key(:propagate_immediately) # can't receive events
      expect(data[:agents][guid_order(agent_list, :jane_rain_notifier_agent)]).not_to have_key(:schedule) # can't be scheduled
    end
    
        it 'should work' do
      LiquidMigrator.convert_all_agent_options(@agent)
      expect(@agent.reload.options).to eq({'auth_token' => 'token', 'color' => 'yellow', 'notify' => false, 'room_name' => 'test', 'username' => '{{username}}', 'message' => '{{message}}'})
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
    
        it 'should raise error when response has an error' do
      stub(HTTParty).post { {'error' => {'message' => 'Sample error'}} }
      expect { @checker.send_notification({}) }.to raise_error(StandardError, /Sample error/)
    end
  end
end

    
        DOCUMENT_RGX = /\A(?:\s|(?:<!--.*?-->))*<(?:\!doctype|html)/i
    
        def effective_path
      @effective_path ||= effective_url.path
    end
  end
end

    
        table = Rex::Text::Table.new(
      'Header'    => '#{provider} credentials',
      'Indent'    => 0,
      'SortIndex' => 4,
      'Columns'   => ['AuthID', 'Package', 'Domain', 'User', 'Password']
    )
    
        # Start a new handler
    start_handler
  end
    
      def encode_block(state, buf)
    # Have to have these for the decoder stub, so if they're not available,
    # there's nothing we can do here.
    %w{c h r ( ) . e v a l b a s e 6 4 _ d e c o d e ;}.uniq.each do |c|
      raise BadcharError if state.badchars.include?(c)
    end
    
    module Payload::Windows::BindTcpRc4_x64
    
    class MetasploitModule < Msf::Auxiliary
  include Msf::Exploit::Remote::HttpClient
    
      def initialize(info = {})
    super(update_info(info,
      'Name'               => 'Jenkins ACL Bypass and Metaprogramming RCE',
      'Description'        => %q{
        This module exploits a vulnerability in Jenkins dynamic routing to
        bypass the Overall/Read ACL and leverage Groovy metaprogramming to
        download and execute a malicious JAR file.
    }
    
    puts 'start: #{start.to_s(16)}'
branch = `rasm2 -b 64 -a arm 'b 0x#{start.to_s(16)}'`
puts 'branch: #{branch}'
output_data[0,4] = [ branch[0..7] ].pack('H*')
    
        print_status('Dumping LSA secrets')
    print_line(client.kiwi.lsa_dump_secrets)
    print_line
  end
    
    #
# Default parameters
#
    
        desc 'Check directories of files to be linked exist in shared'
    task :make_linked_dirs do
      next unless any? :linked_files
      on release_roles :all do |_host|
        execute :mkdir, '-p', linked_file_dirs(shared_path)
      end
    end
    
    Then(/^directories referenced in :linked_files are created in shared$/) do
  dirs = TestApp.linked_files.map { |path| TestApp.shared_path.join(path).dirname }
  dirs.each do |dir|
    run_vagrant_command(test_dir_exists(dir))
  end
end
    
    Given(/^file '(.*?)' does not exist in shared path$/) do |file|
  file_shared_path = TestApp.shared_path.join(file)
  run_vagrant_command('mkdir -p #{TestApp.shared_path}')
  run_vagrant_command('touch #{file_shared_path} && rm #{file_shared_path}')
end
    
            filter = Object.new
        def filter.filter(servers)
          block.call(servers)
        end
      elsif !filter.respond_to? :filter
        raise TypeError, 'Provided custom filter <#{filter.inspect}> does ' \
                         'not have a public 'filter' method'
      end
      @custom_filters ||= []
      @custom_filters << filter
    end
    
    MESSAGE
      end
    end
  end
end

    
            destination_url = options[:url] || spree.send('#{options[:route]}_path')
        titleized_label = Spree.t(options[:label], default: options[:label], scope: [:admin, :tab]).titleize
    
        def updater
      @updater ||= OrderUpdater.new(self)
    end
    
        def has_invalid_state?
      INVALID_STATES.include?(state)
    end
    
        def requires_manual_intervention?
      validators.any?(&:requires_manual_intervention?)
    end
    
            def self.create_inventory_units_from_order_and_params(order, inventory_unit_params)
          inventory_unit_params.each_with_object([]) do |inventory_unit_param, inventory_units|
            ensure_variant_id_from_params(inventory_unit_param)
            existing = inventory_units.detect { |unit| unit.variant_id == inventory_unit_param[:variant_id] }
            if existing
              existing.quantity += 1
            else
              line_item = order.line_items.detect { |ln| ln.variant_id == inventory_unit_param[:variant_id] }
              inventory_units << InventoryUnit.new(line_item: line_item, order_id: order.id, variant: line_item.variant, quantity: 1)
            end
          end
        end
    
          def requires_authentication?
        Spree::Api::Config[:requires_authentication]
      end
    
            def update
          @image = scope.images.accessible_by(current_ability, :update).find(params[:id])
          if @image.update(image_params)
            respond_with(@image, default_template: :show)
          else
            invalid_resource!(@image)
          end
        end
    
            def destroy
          @option_value = scope.accessible_by(current_ability, :destroy).find(params[:id])
          @option_value.destroy
          render plain: nil, status: 204
        end
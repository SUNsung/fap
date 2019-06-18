
        
            def email_changed(record, opts={})
      devise_mail(record, :email_changed, opts)
    end
    
    begin
  require 'bundler/inline'
rescue LoadError => e
  $stderr.puts 'Bundler version 1.10 or later is required. Please update your Bundler'
  raise e
end
    
              # Determine if we require a local Vagrant environment. There are
          # two cases that we require a local environment:
          #
          #   * We're asking for ANY/EVERY VM (no names given).
          #
          #   * We're asking for specific VMs, at least once of which
          #     is NOT in the local machine index.
          #
          requires_local_env = false
          requires_local_env = true if names.empty?
          requires_local_env ||= names.any? { |n|
            !@env.machine_index.include?(n)
          }
          raise Errors::NoEnvironmentError if requires_local_env && !@env.root_path
    
            # Called after the configuration is finalized and loaded to validate
        # this object.
        #
        # @param [Machine] machine Access to the machine that is being
        #   validated.
        # @return [Hash]
        def validate(machine)
          return { self.to_s => _detected_errors }
        end
    
    module Vagrant
  module Plugin
    module V2
      # This class maintains a list of all the registered plugins as well
      # as provides methods that allow querying all registered components of
      # those plugins as a single unit.
      class Manager
        attr_reader :registered
    
        using Magic
    
    Given(/^(\d+) valid existing releases$/) do |num|
  a_day = 86_400 # in seconds
  offset = -(a_day * num.to_i)
  num.to_i.times do
    run_vagrant_command('mkdir -p #{TestApp.release_path(TestApp.timestamp(offset))}')
    offset += a_day
  end
end
    
    set_if_empty :format, :airbrussh
set_if_empty :log_level, :debug
    
          def date
        first = page.last_version
        return Time.now.strftime(DATE_FORMAT) unless first
        first.authored_date.strftime(DATE_FORMAT)
      end
    
        # don't use h1 or it will be promoted to replace file name
    # which doesn't generate a normal header link
    @wiki.write_page(page, :markdown, '## ' + text,
                     { :name => 'user1', :email => 'user1' });
    
        # Title is based on file name when h1_title is false.
    actual = @view.title
    assert_equal 'H1', title
  end
end

    
      # Mount Action Cable outside main process or domain
  # config.action_cable.mount_path = nil
  # config.action_cable.url = 'wss://example.com/cable'
  # config.action_cable.allowed_request_origins = [ 'http://example.com', /http:\/\/example.*/ ]
    
        it 'accepts jsfiddle link' do
      liquid = generate_new_liquid(jsfiddle_link)
      rendered_jsfiddle_iframe = liquid.render
      Approvals.verify(rendered_jsfiddle_iframe, name: 'jsfiddle_liquid_tag', format: :html)
    end
    
      def delete_confirm?
    edit?
  end
    
      context 'hook value is string' do
    before { project.yaml[hook_name] = 'echo 'on hook'' }
    
      describe '.editor?' do
    context '$EDITOR is set' do
      before do
        allow(ENV).to receive(:[]).with('EDITOR') { 'vim' }
      end
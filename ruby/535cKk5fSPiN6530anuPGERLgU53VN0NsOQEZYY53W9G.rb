
        
            class ClearHelpersTest < ActiveSupport::TestCase
      def setup
        @controller = HelperyTestController.new
      end
    
        context '(de)activating users' do
      it 'does not show deactivation buttons for the current user' do
        visit admin_users_path
        expect(page).to have_no_css('a[href='/admin/users/#{users(:jane).id}/deactivate']')
      end
    
      it 'imports a scenario that does not exist yet' do
    visit new_scenario_imports_path
    attach_file('Option 2: Upload a Scenario JSON File', File.join(Rails.root, 'data/default_scenario.json'))
    click_on 'Start Import'
    expect(page).to have_text('This scenario has a few agents to get you started. Feel free to change them or delete them as you see fit!')
    expect(page).not_to have_text('This Scenario already exists in your system.')
    check('I confirm that I want to import these Agents.')
    click_on 'Finish Import'
    expect(page).to have_text('Import successful!')
  end
    
        it 'works for running jobs' do
      job.locked_at = Time.now
      job.locked_by = 'test'
      expect(status(job)).to eq('<span class='label label-info'>running</span>')
    end
    
        it 'can be turned off' do
      stub(DefaultScenarioImporter).seed { fail 'seed should not have been called'}
      stub.proxy(ENV).[](anything)
      stub(ENV).[]('IMPORT_DEFAULT_SCENARIO_FOR_ALL_USERS') { 'false' }
      DefaultScenarioImporter.import(user)
    end
    
      it 'schould register the schedules with the rufus scheduler and run' do
    mock(@rufus_scheduler).join
    scheduler = HuginnScheduler.new
    scheduler.setup!(@rufus_scheduler, Mutex.new)
    scheduler.run
  end
    
    module Vagrant
  module Plugin
    module V2
      # This is the base class for a configuration key defined for
      # V2. Any configuration key plugins for V2 should inherit from this
      # class.
      class Config
        # This constant represents an unset value. This is useful so it is
        # possible to know the difference between a configuration value that
        # was never set, and a value that is nil (explicitly). Best practice
        # is to initialize all variables to this value, then the {#merge}
        # method below will 'just work' in many cases.
        UNSET_VALUE = Object.new
    
            # This returns all registered providers.
        #
        # @return [Hash]
        def providers
          Registry.new.tap do |result|
            @registered.each do |plugin|
              result.merge!(plugin.components.providers)
            end
          end
        end
    
    # Helpers
#-----------------------------------------------------------------------------#
    
    (import 'mDNSResponder.sb')
    
        %w[iOS macOS].each do |platform|
        abstract_target '#{platform} Pods' do
            project '#{platform} Modules.xcodeproj'
    
          def actual_path
        $PROGRAM_NAME
      end
    end
  end
end

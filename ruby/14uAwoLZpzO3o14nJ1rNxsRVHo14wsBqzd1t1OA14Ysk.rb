
        
              if self.available_keys.include?(method_sym)
    
    require 'fastlane_core/print_table'
require 'spaceship'
require 'spaceship/tunes/tunes'
require 'spaceship/tunes/members'
require 'spaceship/test_flight'
require 'fastlane_core/ipa_file_analyser'
require_relative 'module'
    
            testers.each do |tester|
          group_names = tester.beta_groups.map(&:name).join(';') || ''
    
          self.attr_mapping({
        'name' => 'name',
        'bundleId' => 'bundle_id',
        'sku' => 'sku',
        'primaryLocale' => 'primary_locale',
        'removed' => 'removed',
        'isAAG' => 'is_aag'
      })
    
          attr_accessor :auto_notify_enabled
      attr_accessor :did_notify
      attr_accessor :internal_build_state
      attr_accessor :external_build_state
    
        it 'returns false if not installed' do
      expect(machine.communicate).to receive(:test).
        with(command, sudo: true).and_return(false)
      expect(subject.chef_installed(machine, 'chef_solo', version)).to be_falsey
    end
  end
end

    
      let(:machine) { iso_env.machine(iso_env.machine_names[0], :dummy) }
  let(:communicator) { VagrantTests::DummyCommunicator::Communicator.new(machine) }
  let(:config)  { double('config') }
    
      let(:machine) { iso_env.machine(iso_env.machine_names[0], :dummy) }
  let(:communicator) { VagrantTests::DummyCommunicator::Communicator.new(machine) }
  let(:config)  { double('config') }
    
          env[:box_url] = tf.path
      expect(box_collection).to receive(:find).
        with('foo/bar', 'virtualbox', '0.7').and_return(box)
      expect(box_collection).to receive(:add).never
      expect(app).to receive(:call).never
    
        # Run all the queued up actions, parallelizing if possible.
    #
    # This will parallelize if and only if the provider of every machine
    # supports parallelization and parallelization is possible from
    # initialization of the class.
    def run
      par = false
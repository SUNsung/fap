
        
            it 'understands hl=8-' do
      stub(params).[](:hl) { '8-' }
      expect((1..10).select { |i| highlighted?(i) }).to eq [8, 9, 10]
    end
    
    describe JobsHelper do
  let(:job) { Delayed::Job.new }
    
        it 'creates a scenario label with the given text' do
      expect(scenario_label(scenario, 'Other')).to eq(
        '<span class='label scenario' style='color:#AAAAAA;background-color:#000000'>Other</span>'
      )
    end
  end
    
              expect {
            scenario_import.import
          }.to change { users(:bob).agents.count }.by(2)
        end
    
    describe LiquidMigrator do
  describe 'converting JSONPath strings' do
    it 'should work' do
      expect(LiquidMigrator.convert_string('$.data', true)).to eq('{{data}}')
      expect(LiquidMigrator.convert_string('$.data.test', true)).to eq('{{data.test}}')
      expect(LiquidMigrator.convert_string('$first_title', true)).to eq('{{first_title}}')
    end
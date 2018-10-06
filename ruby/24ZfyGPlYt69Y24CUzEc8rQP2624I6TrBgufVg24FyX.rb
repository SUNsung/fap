
        
            it 'works for running jobs' do
      job.locked_at = Time.now
      job.locked_by = 'test'
      expect(status(job)).to eq('<span class='label label-info'>running</span>')
    end
    
    describe ScenarioHelper do
  let(:scenario) { users(:bob).scenarios.build(name: 'Scene', tag_fg_color: '#AAAAAA', tag_bg_color: '#000000') }
    
        context 'when this scenario has never been seen before' do
      describe '#import' do
        it 'makes a new scenario' do
          expect {
            scenario_import.import(:skip_agents => true)
          }.to change { users(:bob).scenarios.count }.by(1)
    
      it 'provides hash-style access to its properties with both symbol and string keys' do
    expect(location[:lat]).to be_a Float
    expect(location[:lat]).to eq 2.0
    expect(location['lat']).to be_a Float
    expect(location['lat']).to eq 2.0
  end
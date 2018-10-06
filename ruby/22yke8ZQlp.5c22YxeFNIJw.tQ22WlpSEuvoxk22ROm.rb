
        
          context 'successful dry runs' do
    before do
      stub_request(:get, 'http://xkcd.com/').
        with(:headers => {'Accept-Encoding'=>'gzip,deflate', 'User-Agent'=>'Huginn - https://github.com/huginn/huginn'}).
        to_return(:status => 200, :body => File.read(Rails.root.join('spec/data_fixtures/xkcd.html')), :headers => {})
    end
    
    describe ApplicationHelper do
  describe '#icon_tag' do
    it 'returns a Glyphicon icon element' do
      icon = icon_tag('glyphicon-help')
      expect(icon).to be_html_safe
      expect(Nokogiri(icon).at('span.glyphicon.glyphicon-help')).to be_a Nokogiri::XML::Element
    end
    
        it 'unregisters deleted SchedulerAgents' do
      @scheduler.schedule_scheduler_agents
    
      it 'is droppable' do
    {
      '{{location.lat}}' => '2.0',
      '{{location.latitude}}' => '2.0',
      '{{location.lng}}' => '3.0',
      '{{location.longitude}}' => '3.0',
      '{{location.latlng}}' => '2.0,3.0',
    }.each { |template, result|
      expect(Liquid::Template.parse(template).render('location' => location.to_liquid)).to eq(result),
        'expected #{template.inspect} to expand to #{result.inspect}'
    }
  end
end

    
        it 'optionally supports treating values that start with '$' as raw JSONPath' do
      expect(Utils.interpolate_jsonpaths('$.there.world', payload)).to eq('$.there.world')
      expect(Utils.interpolate_jsonpaths('$.there.world', payload, :leading_dollarsign_is_jsonpath => true)).to eq('WORLD')
    end
  end
    
          it 'should track when events have been seen and not received them again' do
        mock.any_instance_of(Agents::TriggerAgent).receive(anything).once
        Agent.async_check(agents(:bob_weather_agent).id)
        expect {
          Agent.receive!
        }.to change { agents(:bob_rain_notifier_agent).reload.last_checked_event_id }
    
    describe 'Kernel.sleep' do
  it 'needs to be reviewed for spec completeness'
end

    
      it 'raises a TypeError when passed a String' do
    lambda { srand('7') }.should raise_error(TypeError)
  end
end
    
          ruby_bug '#14846', '2.5'...'2.6' do
        it 'raises ArgumentError if passed -1' do
          -> { warn '', uplevel: -1 }.should raise_error(ArgumentError)
        end
      end
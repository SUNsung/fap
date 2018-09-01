
        
        describe JobsHelper do
  let(:job) { Delayed::Job.new }
    
        it 'strips punctuation' do
      expect(AgentsExporter.new(:name => 'foo,bar').filename).to eq('foo-bar.json')
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
    
          AgentLog.log_for_agent(agents(:jane_website_agent), 'some message', :level => 4, :outbound_event => events(:jane_website_agent_event))
      expect(agents(:jane_website_agent).reload.last_error_log_at.to_i).to be_within(2).of(Time.now.to_i)
    end
    
      it 'calls #to_path on second argument when passed ?d and a directory' do
    p = mock('path')
    p.should_receive(:to_path).and_return @dir
    Kernel.test(?d, p)
  end
end
    
        $Kernel_trace_var_global = 'foo'
    captured.should == 'foo'
  end
    
      it 'does not append line-end if last character is line-end' do
    lambda {
      $VERBOSE = true
      warn('this is some simple text with line-end\n')
    }.should output(nil, 'this is some simple text with line-end\n')
  end
    
      def append(*paths)
    @paths = parse(*@paths, *paths)
    self
  end
    
          Pathname.glob(path.join('*')).sort.select(&:directory?).map do |path|
        token = path.basename.to_s
    
          errors.each do |error|
        summary << ' #{Formatter.error('-')} #{error}'
      end
    
        # Outputs the post.date as formatted html, with hooks for CSS styling.
    #
    #  +date+ is the date object to format as HTML.
    #
    # Returns string
    def date_to_html_string(date)
      result = '<span class='month'>' + date.strftime('%b').upcase + '</span> '
      result << date.strftime('<span class='day'>%d</span> ')
      result << date.strftime('<span class='year'>%Y</span> ')
      result
    end
    
        def initialize(tag_name, markup, tokens)
      attributes = ['class', 'src', 'width', 'height', 'title']
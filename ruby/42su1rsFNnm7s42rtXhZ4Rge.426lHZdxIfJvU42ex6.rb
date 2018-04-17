
        
                hash.each do |key, value|
          self[convert_key(key)] = value
        end
      end
    
              # Verify the box exists that we want to repackage
          box = @env.boxes.find(box_name, box_provider, '= #{box_version}')
          if !box
            raise Vagrant::Errors::BoxNotFoundWithProviderAndVersion,
              name: box_name,
              provider: box_provider.to_s,
              version: box_version
          end
    
              o.on('--check', 'Only checks for a capability, does not execute') do |f|
            options[:check] = f
          end
        end
    
    
    {      ary.empty? or raise 'forgotten elements: #{ary.join(', ')}'
    }
    
      def self.critical_is_reset
    # Create another thread to verify that it can call Thread.critical=
    t = Thread.new do
      initial_critical = Thread.critical
      Thread.critical = true
      Thread.critical = false
      initial_critical == false && Thread.critical == false
    end
    v = t.value
    t.join
    v
  end
    
      it 'runs nested ensure clauses' do
    ScratchPad.record []
    @outer = Thread.new do
      begin
        @inner = Thread.new do
          begin
            sleep
          ensure
            ScratchPad << :inner_ensure_clause
          end
        end
        sleep
      ensure
        ScratchPad << :outer_ensure_clause
        @inner.send(@method)
        @inner.join
      end
    end
    Thread.pass while @outer.status and @outer.status != 'sleep'
    Thread.pass until @inner
    Thread.pass while @inner.status and @inner.status != 'sleep'
    @outer.send(@method)
    @outer.join
    ScratchPad.recorded.should include(:inner_ensure_clause)
    ScratchPad.recorded.should include(:outer_ensure_clause)
  end
    
      it 'raises a ThreadError when trying to wake up a dead thread' do
    t = Thread.new { 1 }
    t.join
    lambda { t.send @method }.should raise_error(ThreadError)
  end
end

    
      # if rss_url already in existing opml file, use that; otherwise, do a lookup
  rss_url = nil
  existing_blog = xml.xpath('//outline[@htmlUrl='#{web_url}']').first if xml
  if existing_blog
    rss_url = existing_blog.attr('xmlUrl')
    puts '#{name}: ALREADY HAVE'
  end
    
    describe 'modular-scale' do
  before(:all) do
    ParserSupport.parse_file('library/modular-scale')
  end
    
      context 'called with multiple prefixes' do
    it 'applies the prefixes to the property' do
      rule = '-moz-appearance: none; ' +
             '-ms-appearance: none; ' +
             'appearance: none;'

        
                staff.topic_id = post.topic.id
        unless staff.save
          puts staff.errors.full_messages
          puts 'Failed to set the Staff category description topic!'
        end
    
          def inherited(subclass)
        subclass.type = type
      end
    
        def length
      @entries.length
    end
    
        def initialize(options = {})
      @request_options = options.extract!(:request_options)[:request_options].try(:dup) || {}
      options[:max_concurrency] ||= 20
      options[:pipelining] = false
      super
    end
    
        def html?
      mime_type.include? 'html'
    end
    
        def log(msg)
      puts '\r' + justify(msg)
    end
    
              if node['class'] && node['class'].include?('api-heading')
            node.name = 'h3'
            node.inner_html = '<code>#{node.inner_html}</code>'
          end
    
            title = at_css('h1').content.strip
        if root_page?
          at_css('h1').content = 'Angular 2 Documentation'
        elsif title == 'Index'
          at_css('h1').content = result[:entries].first.name
        elsif title == 'Angular'
          at_css('h1').content = slug.split('/').last.gsub('-', ' ')
        elsif at_css('.breadcrumbs') && title != result[:entries].first.name
          at_css('h1').content = result[:entries].first.name
        end
    
            if mod
          if name == 'Index'
            return slug.split('/')[1..-2].join('/')
          elsif name == 'Angular'
            return slug.split('/').last.split('-').first
          end
        end
    
            # Remove examples
        css('.runnable-example').each do |node|
          node.parent.remove
        end
    
        t.wakeup
    t.value.should == 5
  end
end
    
            -> { w.f4('', 0) }.should output(nil, %r|core/kernel/fixtures/classes.rb:#{w.warn_call_lineno}: warning: \n$|)
        -> { w.f4(nil, 0) }.should output(nil, %r|core/kernel/fixtures/classes.rb:#{w.warn_call_lineno}: warning: \n$|)
      end
    
    Given(/^(\d+) valid existing releases$/) do |num|
  a_day = 86_400 # in seconds
  offset = -(a_day * num.to_i)
  num.to_i.times do
    run_vagrant_command('mkdir -p #{TestApp.release_path(TestApp.timestamp(offset))}')
    offset += a_day
  end
end
    
          def servers_by_key
        @servers_by_key ||= {}
      end
    
          def set(key, value=nil, &block)
        @trusted_keys << key if trusted? && !@trusted_keys.include?(key)
        remember_location(key)
        values[key] = block || value
        trace_set(key)
        values[key]
      end
    
    # define charCodeAt on String
class String
  def charCodeAt(k)
    # use scan, nil check, and unpack instead of ord for 1.8
    # 1.9 can simply use self[k].ord
    # http://stackoverflow.com/questions/7793177/split-utf8-string-regardless-of-ruby-version
    c = self.scan(/./mu)[k]
    return nil if c.nil?
    c.unpack('U')[0]
  end
end
    
          # private
    
          def page_dir
        @page_dir
      end
    
        @wiki.update_page(@wiki.page('PG'), nil, nil, '다른 text', {})
    page = @wiki.page('PG')
    assert_equal '다른 text', utf8(page.raw_data)
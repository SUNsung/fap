
        
            def release
      context[:release]
    end
    
        def initialize
      super
      initialize_stubs
    end
    
        def log(msg)
      puts '\r' + justify(msg)
    end
    
            css('.c10', '.showcase', '.showcase-content', '.l-main-section', 'div.div', 'div[flex]', 'code-tabs', 'md-card', 'md-card-content', 'div:not([class])', 'footer', '.card-row', '.card-row-container', 'figure', 'blockquote', 'exported', 'defined', 'div.ng-scope', '.code-example header', 'section.desc', '.row', '.dart-api-entry-main', '.main-content', 'section.summary', 'span.signature').each do |node|
          node.before(node.children).remove
        end
    
            # Remove root-level <div>
        while div = at_css('h1 + div')
          div.before(div.children)
          div.remove
        end
    
      if n.x < 0.6 and n.x > -0.6 then
    basis[1].x = 1.0
  elsif n.y < 0.6 and n.y > -0.6 then
    basis[1].y = 1.0
  elsif n.z < 0.6 and n.z > -0.6 then
    basis[1].z = 1.0
  else
    basis[1].x = 1.0
  end
    
    answer_ary = answer.to_a
# puts answer_ary

    
          <ul id='backtrace-ul'>
    
          def html?(headers)
        return false unless header = headers.detect { |k,v| k.downcase == 'content-type' }
        options[:html_types].include? header.last[/^\w+\/\w+/]
      end
    end
  end
end

    
        page = @wiki.page('D')
    assert page.nil?
  end
    
        # Test page_header_from_content(@content)
    actual = @view.title
    assert_equal '1 & 2', actual
  end
    
          context 'splitting to location' do
        before { visit spree.edit_admin_order_path(order) }
        # can not properly implement until poltergeist supports checking alert text
        # see https://github.com/teampoltergeist/poltergeist/pull/516
    
    desc 'Runs all tests in all Spree engines'
task test: :test_app do
  SPREE_GEMS.each do |gem_name|
    Dir.chdir('#{File.dirname(__FILE__)}/#{gem_name}') do
      sh 'rspec'
    end
  end
end

        
            wait_for_requests
  end
    
      describe '#can_resend_invite?' do
    context 'when project_member is invited' do
      before do
        expect(project_member).to receive(:invite?).and_return(true)
      end
    
              if slug.start_with?('docs/syntax_and_semantics')
            name.prepend '#{slug.split('/')[2].titleize}: ' if slug.split('/').length > 3
          elsif slug.split('/').length > 1
            chapter = slug.split('/')[1].titleize.capitalize
            name.prepend '#{chapter}: ' unless name == chapter
          end
    
            css('pre > code').each do |node|
          node['class'] ||= ''
          lang = if node['class'].include?('lang-html') || node.content =~ /\A</
            'html'
          elsif node['class'].include?('lang-css')
            'css'
          elsif node['class'].include?('lang-js') || node['class'].include?('lang-javascript')
            'javascript'
          end
          node.parent['data-language'] = lang if lang
          node.before(node.children).remove
        end
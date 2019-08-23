
        
            def clean_path(path)
      path = path.gsub %r{[!;:]}, '-'
      path = path.gsub %r{\+}, '_plus_'
      path
    end
  end
end

    
        def as_json
      @pages
    end
    
        def html?
      mime_type.include? 'html'
    end
    
          private
    
              node['data-language'] = 'typescript' if node['path'].try(:ends_with?, '.ts')
          node['data-language'] = 'html' if node['path'].try(:ends_with?, '.html')
          node['data-language'] = 'css' if node['path'].try(:ends_with?, '.css')
          node['data-language'] = 'js' if node['path'].try(:ends_with?, '.js')
          node['data-language'] = 'json' if node['path'].try(:ends_with?, '.json')
          node['data-language'] = node['language'].sub(/\Ats/, 'typescript').strip if node['language']
          node['data-language'] ||= 'typescript' if node.content.start_with?('@')
    
            css('.note h3', '.warning h3').each do |node|
          node.before('<p><strong>#{node.inner_html}</strong></p>').remove
        end
    
      protected
    
            if options[:bypass]
          ActiveSupport::Deprecation.warn(<<-DEPRECATION.strip_heredoc, caller)
          [Devise] bypass option is deprecated and it will be removed in future version of Devise.
          Please use bypass_sign_in method instead.
          Example:
    
          def self.required_fields(klass)
        []
      end
    
    
    {              # Needed to ensure that static libraries won't try to embed the swift stdlib,
              # since there's no where to embed in for a static library.
              # Not necessary for dynamic frameworks either, since the aggregate targets are never shipped
              # on their own, and are always further embedded into an app target.
              'ALWAYS_EMBED_SWIFT_STANDARD_LIBRARIES' => 'NO',
            }
            super.merge(settings)
          end
    
            it 'is a library target if the user_target is a static library' do
          @target.user_targets.first.stubs(:symbol_type).returns(:static_library)
          @target.library?.should == true
        end
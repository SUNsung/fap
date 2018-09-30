
        
              def failed?
        error_message.present?
      end
    
              if @job.blank?
            @pipeline.coverage
          else
            @pipeline.builds
              .find_by(name: @job)
              .try(:coverage)
          end
        end
      end
    end
  end
end

    
            def value_text
          STATUS_RENAME[@status.to_s] || @status.to_s
        end
    
        set :csp, false
    
        html_filters.push 'clean_local_urls'
    
            subtitle = at_css('.hero-subtitle').try(:content)
        breadcrumbs = css('.breadcrumbs li').map(&:content)[2..-2]
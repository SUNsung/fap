
        
        unless dups.empty?
  puts '\nDuplicate links:'
  dups.each do |link|
    puts '- #{link}'
    puts `grep -nr '#{link}' README.md`
  end
  puts '\nDone with errors.'
  exit(1)
end
    
        private
    
      # Configure static asset server for tests with Cache-Control for performance.
  if config.respond_to?(:serve_static_files)
    # rails >= 4.2
    config.serve_static_files = true
  elsif config.respond_to?(:serve_static_assets)
    # rails < 4.2
    config.serve_static_assets = true
  end
  config.static_cache_control = 'public, max-age=3600'
    
    Then /^(?:|I )should see '([^']*)'$/ do |text|
  expect(page).to have_content(text)
end

    
            def matches? subject
          @subject = subject
          @subject = @subject.class unless Class === @subject
          responds? && has_column?
        end
    
            def failure_message
          '#{expected_attachment}\n'.tap do |message|
            message << accepted_types_and_failures.to_s
            message << '\n\n' if @allowed_types.present? && @rejected_types.present?
            message << rejected_types_and_failures.to_s
          end
        end
    
              @subject.send(@attachment_name).post_processing = false
          @subject.send(@attachment_name).assign(file)
          @subject.valid?
          @subject.errors[:'#{@attachment_name}_file_size'].blank?
        ensure
          @subject.send(@attachment_name).post_processing = true
        end
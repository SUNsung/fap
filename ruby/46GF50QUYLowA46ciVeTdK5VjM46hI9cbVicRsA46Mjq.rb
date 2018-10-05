
        
                    if generate_ids?
              options['id'] = options.fetch('id') { tag_id(index) }
              if namespace = options.delete('namespace')
                options['id'] = options['id'] ? '#{namespace}_#{options['id']}' : namespace
              end
            end
          end
    
    module ActionView
  module Helpers
    module Tags # :nodoc:
      class CheckBox < Base #:nodoc:
        include Checkable
    
              def render_component(builder)
            builder.radio_button + builder.label
          end
      end
    end
  end
end

    
        def initialize_copy(other)
      @paths = other.paths.dup
      self
    end
    
    unless dups.empty?
  puts '\nDuplicate links:'
  dups.each do |link|
    puts '- #{link}'
    puts `grep -nr '#{link}' README.md`
  end
  puts '\nDone with errors.'
  exit(1)
end
    
        change.down do
      Notification.where(type: 'Notifications::MentionedInPost').update_all(type: 'Notifications::Mentioned')
      Mention.where(mentions_container_type: 'Comment').destroy_all
      Notification.where(type: 'Notifications::MentionedInComment').destroy_all
    end
  end
end

    
    When /^I submit forgot password form$/ do
  submit_forgot_password_form
end
    
    Before do |scenario|
  Devise.mailer.deliveries = []
  page.driver.headers = if scenario.source_tag_names.include? '@mobile'
                          {'User-Agent' => 'Mozilla/5.0 (Mobile; rv:18.0) Gecko/18.0 Firefox/18.0'}
                        else
                          {}
                        end
    
            return nil
      end
    end
  end
end end end

    
        def valid_format?(local_file)
      ::File.extname(local_file).downcase == PACK_EXTENSION
    end
  end
end end end

    
        # any errors will be logged to $stderr by invoke!
    # Bundler cannot update and clean gems in one operation so we have to call the CLI twice.
    options = {:update => plugins, :rubygems_source => gemfile.gemset.sources}
    options[:local] = true if local?
    output = LogStash::Bundler.invoke!(options)
    # We currently dont removed unused gems from the logstash installation
    # see: https://github.com/elastic/logstash/issues/6339
    # output = LogStash::Bundler.invoke!(:clean => true)
    display_updated_plugins(previous_gem_specs_map)
  rescue => exception
    gemfile.restore!
    report_exception('Updated Aborted', exception)
  ensure
    display_bundler_output(output)
  end
    
    Gem::Specification.new do |gem|
  gem.authors       = ['Elastic']
  gem.email         = ['info@elastic.co']
  gem.description   = %q{Logstash plugin API}
  gem.summary       = %q{Define the plugin API that the plugin need to follow.}
  gem.homepage      = 'http://www.elastic.co/guide/en/logstash/current/index.html'
  gem.license       = 'Apache License (2.0)'
    
        shared_examples('safe URI') do |options|
      options ||= {}
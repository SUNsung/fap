
        
            def root_path
      context[:root_path]
    end
    
        attr_reader :filters
    
        def initialize(content)
      @content = content
      @html = document? ? parse_as_document : parse_as_fragment
    end
    
        def request_options
      options = { params: self.class.params, headers: self.class.headers }
      options[:accept_encoding] = 'gzip' if self.class.force_gzip
      options
    end
    
          str.truncate(max_length).ljust(max_length) << tag.to_s
    end
    
      add_filter %r{^/build.rb$}
  add_filter %r{^/config.rb$}
  add_filter %r{^/constants.rb$}
  add_filter %r{^/postinstall.rb$}
  add_filter %r{^/test.rb$}
  add_filter %r{^/compat/}
  add_filter %r{^/dev-cmd/tests.rb$}
  add_filter %r{^/test/}
  add_filter %r{^/vendor/}
    
        mkdir_p page_dir
    file = '#{page_dir}/#{filename}.#{extension}'
    if File.exist?(file)
      abort('rake aborted!') if ask('#{file} already exists. Do you want to overwrite?', ['y', 'n']) == 'n'
    end
    puts 'Creating new page: #{file}'
    open(file, 'w') do |page|
      page.puts '---'
      page.puts 'layout: page'
      page.puts 'title: \'#{title}\''
      page.puts 'date: #{Time.now.strftime('%Y-%m-%d %H:%M')}'
      page.puts 'comments: true'
      page.puts 'sharing: true'
      page.puts 'footer: true'
      page.puts '---'
    end
  else
    puts 'Syntax error: #{args.filename} contains unsupported characters'
  end
end
    
      def send_sinatra_file(path, &missing_file_block)
    file_path = File.join(File.dirname(__FILE__), 'public',  path)
    file_path = File.join(file_path, 'index.html') unless file_path =~ /\.[a-z]+$/i
    File.exist?(file_path) ? send_file(file_path) : missing_file_block.call
  end
    
      factory :project_with_force_detach, class: Tmuxinator::Project do
    transient do
      file { yaml_load('spec/fixtures/detach.yml') }
    end
    initialize_with { Tmuxinator::Project.new(file, force_detach: true) }
  end
    
        context 'synchronization is 'after'' do
      let(:synchronize) { 'after' }
    
    Then /^I should see a table with id '([^']*)'$/ do |dom_id|
  page.find('table##{dom_id}')
end

    
        end
  end
end

    
        class RegistrationsController < ::Devise::RegistrationsController
      include ::ActiveAdmin::Devise::Controller
    end
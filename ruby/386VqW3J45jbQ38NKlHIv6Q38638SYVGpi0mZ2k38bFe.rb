
        
                class Listener < SubscriberMap
          def initialize(adapter, event_loop)
            super()
    
            def test_url_host_db
          spec = resolve 'abstract://foo/bar?encoding=utf8'
          assert_equal({
            'adapter'  => 'abstract',
            'database' => 'bar',
            'host'     => 'foo',
            'encoding' => 'utf8' }, spec)
        end
    
    class TestResponseTest < ActiveSupport::TestCase
  def assert_response_code_range(range, predicate)
    response = ActionDispatch::TestResponse.new
    (0..599).each do |status|
      response.status = status
      assert_equal range.include?(status), response.send(predicate),
                   'ActionDispatch::TestResponse.new(#{status}).#{predicate}'
    end
  end
    
    class AssertSelectEmailTest < ActionMailer::TestCase
  class AssertSelectMailer < ActionMailer::Base
    def test(html)
      mail body: html, content_type: 'text/html',
        subject: 'Test e-mail', from: 'test@test.host', to: 'test <test@test.host>'
    end
  end
    
        html_filters.push 'django/entries', 'sphinx/clean_html', 'django/clean_html'
    text_filters.push 'django/fix_urls'
    
        options[:attribution] = <<-HTML
      &copy; 2012 Plataformatec<br>
      Licensed under the Apache License, Version 2.0.
    HTML
    
        version '4' do
      self.release = '4.5.0'
      self.base_url = 'http://sinonjs.org/releases/v#{release}/'
    end
    
        def parse(response)
      unless response.url == root_url || self.class.version == 'Guide'
        response.body.sub!(/<nav class='devsite-nav-responsive-sidebar.+?<\/nav>/m, '')
        response.body.gsub!(/<li class='devsite-nav-item'>.+?<\/li>/m, '')
      end
    
          # If this importer is based on files on the local filesystem This method
      # should return true if the file, when changed, should trigger a
      # recompile.
      #
      # It is acceptable for non-sass files to be watched and trigger a recompile.
      #
      # @param filename [String] The absolute filename for a file that has changed.
      # @return [Boolean] When the file changed should cause a recompile.
      def watched_file?(filename)
        false
      end
    end
  end
end

    
      require 'sass/plugin/rack'
  class Sass::Plugin::MerbBootLoader < Merb::BootLoader
    after Merb::BootLoader::RackUpApplication
    
    module Capistrano
  module Doctor
    # Prints table of all Capistrano-related gems and their version numbers. If
    # there is a newer version of a gem available, call attention to it.
    class GemsDoctor
      include Capistrano::Doctor::OutputHelpers
    
          def color
        @color ||= SSHKit::Color.new($stdout)
      end
    end
  end
end

    
      mkdir_p tasks_dir
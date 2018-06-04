
        
          delegate :form_configurable_attributes, to: :class
  delegate :form_configurable_fields, to: :class
    
        @table_sort_info = {
      order: { attribute.to_sym => direction.to_sym },
      attribute: attribute,
      direction: direction
    }
  end
    
      def destroy_all
    Delayed::Job.where(locked_at: nil).delete_all
    
            name
      end
    
        version '4' do
      self.release = '4.1.1'
      self.base_url = 'https://getbootstrap.com/docs/4.1/'
      self.root_path = 'getting-started/introduction/'
    
        def initial_urls
      [ 'https://hexdocs.pm/elixir/#{self.class.release}/api-reference.html',
        'https://hexdocs.pm/eex/#{self.class.release}/EEx.html',
        'https://hexdocs.pm/ex_unit/#{self.class.release}/ExUnit.html',
        'https://hexdocs.pm/iex/#{self.class.release}/IEx.html',
        'https://hexdocs.pm/logger/#{self.class.release}/Logger.html',
        'https://hexdocs.pm/mix/#{self.class.release}/Mix.html',
        'https://elixir-lang.org/getting-started/introduction.html' ]
    end
    
        version '8 LTS' do
      self.release = '8.11.1'
      self.base_url = 'https://nodejs.org/dist/latest-v8.x/docs/api/'
    end
    
        options[:attribution] = <<-HTML
      &copy; 2010 The Rust Project Developers<br>
      Licensed under the Apache License, Version 2.0 or the MIT license, at your option.
    HTML
    
        version do
      self.release = '4.8.3'
      self.base_url = 'https://webpack.js.org/'
      self.root_path = 'guides/'
      self.initial_paths = %w(
        concepts/
        guides/
        api/
        configuration/
        loaders/
        plugins/
      )
      self.links = {
        home: 'https://webpack.js.org/',
        code: 'https://github.com/webpack/webpack'
      }
    
        def insert_after(index, *names)
      insert assert_index(index) + 1, *names
    end
    
        def type=(value)
      @type = value.try :strip
    end
    
    module Docs
  class PageDb
    attr_reader :pages
    
        if test_conf['database']&.present?
      ActiveRecord::Base.establish_connection(:test)
      yield
      ActiveRecord::Base.establish_connection(Rails.env.to_sym)
    end
  end
    
      attributes :id, :type, :url, :preview_url,
             :remote_url, :text_url, :meta,
             :description
    
      def icon
    object.image
  end
    
    def list_login_items_for_app(app_path)
  out, err, status = Open3.capture3(
    '/usr/bin/osascript', '-e',
    'tell application \'System Events\' to get the name of every login item ' \
    'whose path contains \'#{File.basename(app_path)}\''
  )
  if status.exitstatus > 0
    $stderr.puts err
    exit status.exitstatus
  end
  puts out.gsub(', ', '\n')
end
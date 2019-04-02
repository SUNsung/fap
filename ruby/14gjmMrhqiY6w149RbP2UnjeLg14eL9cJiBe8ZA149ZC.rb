          pipelines.each do |pipeline|
            self.new(pipeline).tap do |preloader|
              preloader.preload_commit_authors
              preloader.preload_pipeline_warnings
              preloader.preload_stages_warnings
            end
          end
        end
    
          # Iterates over all of the objects for the given method (e.g. `:labels`).
      #
      # method - The method to send to Octokit for querying data.
      # args - Any arguments to pass to the Octokit method.
      def each_object(method, *args, &block)
        return to_enum(__method__, method, *args) unless block_given?
    
    module Gitlab
  module GithubImport
    module Importer
      class NotesImporter
        include ParallelScheduling
    
            def labels?
          label_names && label_names.any?
        end
    
        def type=(value)
      @type = value.try :strip
    end
    
        def path
      @path ||= url.path
    end
    
        def parse(response)
      parser = Parser.new(response.body)
      [parser.html, parser.title]
    end
    
        def process_response?(response)
      if response.error?
        raise <<~ERROR
          Error status code (#{response.code}): #{response.return_message}
          #{response.url}
          #{JSON.pretty_generate(response.headers).slice(2..-3)}
        ERROR
      elsif response.blank?
        raise 'Empty response body: #{response.url}'
      end
    
            if has_vector?(request, headers)
          warn env, 'attack prevented by #{self.class}'
    
    
    
          locations = Array.new
      while (data.code.to_i == 301 || data.code.to_i == 302)
        data = handle_gist_redirecting(data)
        break if locations.include? data.header['Location']
        locations << data.header['Location']
      end
    
          Dir.chdir(file_path) do
        contents = file.read
        if contents =~ /\A-{3}.+[^\A]-{3}\n(.+)/m
          contents = $1.lstrip
        end
        contents = pre_filter(contents)
        if @raw
          contents
        else
          partial = Liquid::Template.parse(contents)
          context.stack do
            partial.render(context)
          end
        end
      end
    end
  end
end

        
              class MergeRequest < ActiveRecord::Base
        self.table_name = 'merge_requests'
    
            while next_url
          response = with_rate_limit { next_url.get }
          next_url = response.rels[:next]
    
            def importer_class
          DiffNoteImporter
        end
    
            def representation_class
          Representation::Note
        end
    
    module Gitlab
  module GithubImport
    module Representation
      class DiffNote
        include ToHash
        include ExposeAttribute
    
            # attributes - A Hash containing the raw note details. The keys of this
        #              Hash must be Symbols.
        def initialize(attributes)
          @attributes = attributes
        end
    
        def clean_path(path)
      path = path.gsub %r{[!;:]}, '-'
      path = path.gsub %r{\+}, '_plus_'
      path
    end
  end
end

    
          def fetch_redirections
        result = {}
        with_filters 'apply_base_url', 'container', 'normalize_urls', 'internal_urls' do
          build_pages do |page|
            next if page[:response_effective_path] == page[:response_path]
            result[page[:response_path].downcase] = page[:response_effective_path]
          end
        end
        result
      end
    
          INDEX = Set.new
    
            css('.nav-index-section').each do |node|
          node.content = node.content
        end
    
            css('p > code:first-child:last-child', 'td > code:first-child:last-child').each do |node|
          next if node.previous.try(:content).present? || node.next.try(:content).present?
          node.inner_html = node.inner_html.squish.gsub(/<br(\ \/)?>\s*/, '\n')
          node.content = node.content.strip
          node.name = 'pre' if node.content =~ /\s/
          node.parent.before(node.parent.children).remove if node.parent.name == 'p'
        end
    
    @@ index
  <h1>Sinatra + Sidekiq Example</h1>
  <h2>Failed: <%= @failed %></h2>
  <h2>Processed: <%= @processed %></h2>
    
    desc 'Start an IRB session with all necessary files required.'
task :shell do |t|
  chdir File.dirname(__FILE__)
  exec 'irb -I lib/ -I lib/paperclip -r rubygems -r active_record -r tempfile -r init'
end
    
    ENV['RAILS_ENV'] = 'test'
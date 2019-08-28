
        
            def find_by_content(query)
      repository.search_files_by_content(query, ref).map do |result|
        Gitlab::Search::FoundBlob.new(content_match: result, project: project, ref: ref, repository: repository)
      end
    end
    
            @decoded ||= ::JWT.decode(request.params['jwt'], secret, true, { algorithm: options.algorithm }).first
    
            desc 'Requests access for the authenticated user to a #{source_type}.' do
          detail 'This feature was introduced in GitLab 8.11.'
          success Entities::AccessRequester
        end
        post ':id/access_requests' do
          source = find_source(source_type, params[:id])
          access_requester = source.request_access(current_user)
    
    module API
  class Badges < Grape::API
    include PaginationParams
    
        def at_css(*args)
      doc.at_css(*args)
    end
    
        def insert(index, *names)
      @filters.insert assert_index(index), *filter_const(names)
    end
    
    module Docs
  class Scraper < Doc
    class << self
      attr_accessor :base_url, :root_path, :initial_paths, :options, :html_filters, :text_filters, :stubs
    
            css('.filetree').each do |node|
          node.content = node.css('.file').map(&:inner_html).join('\n')
          node.name = 'pre'
          node.remove_attribute('class')
        end
    
          def get_type
        if slug.start_with?('guide/')
          'Guide'
        elsif slug.start_with?('cookbook/')
          'Cookbook'
        elsif slug == 'glossary'
          'Guide'
        else
          type = at_css('.nav-title.is-selected').content.strip
          type.remove! ' Reference'
          type << ': #{mod}' if mod
          type
        end
      end
    
      def origin_account
    @account
  end
    
    namespace :emojis do
  desc 'Generate a unicode to filename mapping'
  task :generate do
    source = 'http://www.unicode.org/Public/emoji/11.0/emoji-test.txt'
    codes  = []
    dest   = Rails.root.join('app', 'javascript', 'mastodon', 'features', 'emoji', 'emoji_map.json')
    
        it 'returns http success' do
      expect(response).to have_http_status(200)
    end
    
        context '!(follow.account.nil? || !follow.account.local?)' do
      let(:_nil)    { false }
      let(:local)   { true }
    
      def test_font_helper_with_suffix_question
    assert_match %r(url\(['']?/assets/.*eot\?.*['']?\)), @css
  end
    
      describe '#name' do
    it { expect(instance.name).to eq 'wemux' }
  end
    
        def tmux_select_first_pane
      '#{project.tmux} select-pane -t #{tmux_window_target}.#{panes.first.index + project.pane_base_index}'
    end
    
          it 'returns the string' do
        expect(pre).to eq('mysql.server start')
      end
    end
    
      def commands_match
    @actual.commands == commands
  end
    
          say out
    end
    
          it 'should take precedence over a named project' do
        allow(described_class).to receive_messages(directory: fixtures_dir)
        project_config = File.join(fixtures_dir, 'sample_number_as_name.yml')
        project = described_class.validate(name: 'sample',
                                           project_config: project_config)
        expect(project.name).to eq('222')
      end
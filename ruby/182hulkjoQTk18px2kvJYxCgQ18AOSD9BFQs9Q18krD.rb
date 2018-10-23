
        
          def create
    if signed_request_account
      upgrade_account
      process_payload
      head 202
    else
      render plain: signature_verification_failure_reason, status: 401
    end
  end
    
        def resource_params
      params.require(:report_note).permit(
        :content,
        :report_id
      )
    end
    
      def maxheight_or_default
    params[:maxheight].present? ? params[:maxheight].to_i : nil
  end
end

    
      def initialize(repo: 'twbs/bootstrap', branch: 'master', save_to: {}, cache_path: 'tmp/converter-cache-bootstrap')
    @logger     = Logger.new
    @repo       = repo
    @branch     = branch || 'master'
    @branch_sha = get_branch_sha
    @cache_path = cache_path
    @repo_url   = 'https://github.com/#@repo'
    @save_to    = {
        js:    'assets/javascripts/bootstrap',
        scss:  'assets/stylesheets/bootstrap',
        fonts: 'assets/fonts/bootstrap'}.merge(save_to)
  end
    
        def read_cached_files(path, files)
      full_path = '#@cache_path/#@branch_sha/#{path}'
      contents  = {}
      if File.directory?(full_path)
        files.each do |name|
          path = '#{full_path}/#{name}'
          contents[name] = File.read(path, mode: 'rb') if File.exists?(path)
        end
      end
      contents
    end
    
        %w[iOS macOS].each do |platform|
        abstract_target '#{platform} Pods' do
            project '#{platform} Modules.xcodeproj'
    
            self.description = <<-DESC
          Shows the content of the pods cache as a YAML tree output, organized by pod.
          If `NAME` is given, only the caches for that pod will be included in the output.
        DESC
    
            def left_whole_line_range(loc_begin)
          if range_by_whole_lines(loc_begin).source.strip == '{'
            range_by_whole_lines(loc_begin, include_final_newline: true)
          else
            loc_begin
          end
        end
    }
    
        it 'accepts one hash parameter without braces and with one hash value' do
      expect_no_offenses('where(x: { 'y' => 'z' })')
    end
    
          it 'does not autocorrect the closing brace' do
        new_source = autocorrect_source(source)
        expect(new_source).to eq([source].join($RS))
      end
    end
    
          # Checks whether any of the key value pairs in the `hash` literal are on
      # the same line.
      #
      # @note A multiline `pair` is considered to be on the same line if it
      #       shares any of its lines with another `pair`
      #
      # @return [Boolean] whether any `pair` nodes are on the same line
      def pairs_on_same_line?
        pairs.each_cons(2).any? { |first, second| first.same_line?(second) }
      end
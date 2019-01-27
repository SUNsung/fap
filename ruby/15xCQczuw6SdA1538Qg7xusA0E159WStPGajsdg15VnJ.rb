
        
              def perform(start_id, stop_id)
        update = '
          latest_merge_request_diff_id = (
            SELECT MAX(id)
            FROM merge_request_diffs
            WHERE merge_requests.id = merge_request_diffs.merge_request_id
          )'.squish
    
    module Gitlab
  module GithubImport
    module Importer
      class IssuesImporter
        include ParallelScheduling
    
            attr_reader :attributes
    
            expose_attribute :iid, :title, :description, :source_branch,
                         :source_branch_sha, :target_branch, :target_branch_sha,
                         :milestone_number, :author, :assignee, :created_at,
                         :updated_at, :merged_at, :source_repository_id,
                         :target_repository_id, :source_repository_owner
    
            attr_reader :attributes
    
      it 'expands shell variables when given a single string argument' do
    lambda { @object.system('echo #{@shell_var}') }.should output_to_fd('foo\n')
  end
    
      it 'returns true when passed ?r if the argument is readable by the effective uid' do
    Kernel.test(?r, @file).should be_true
  end
    
      it 'raises ArgumentError if no block or proc is provided' do
    lambda do
      trace_var :$Kernel_trace_var_global
    end.should raise_error(ArgumentError)
  end
end

    
      task :index do
    doc = File.read('README.md')
    file = 'doc/rack-protection-readme.md'
    Dir.mkdir 'doc' unless File.directory? 'doc'
    puts 'writing #{file}'
    File.open(file, 'w') { |f| f << doc }
  end
    
          def referrer(env)
        ref = env['HTTP_REFERER'].to_s
        return if !options[:allow_empty_referrer] and ref.empty?
        URI.parse(ref).host || Request.new(env).host
      rescue URI::InvalidURIError
      end
    
          def session_key
        @session_key ||= options[:session_key]
      end
    end
  end
end

    
    RSpec.describe RuboCop::Cop::Layout::MultilineArrayBraceLayout, :config do
  subject(:cop) { described_class.new(config) }
    
          # The body of the method definition.
      #
      # @note this can be either a `begin` node, if the method body contains
      #       multiple expressions, or any other node, if it contains a single
      #       expression.
      #
      # @return [Node] the body of the method definition
      def body
        node_parts[0]
      end
    
          # Whether the last argument of the node is a block pass,
      # i.e. `&block`.
      #
      # @return [Boolean] whether the last argument of the node is a block pass
      def block_argument?
        arguments? &&
          (last_argument.block_pass_type? || last_argument.blockarg_type?)
      end
    end
  end
end

    
      if options.respond_to? 'keys'
    options.each do |k,v|
      unless v.nil?
        v = v.join ',' if v.respond_to? 'join'
        v = v.to_json if v.respond_to? 'keys'
        output += ' data-#{k.sub'_','-'}='#{v}''
      end
    end
  elsif options.respond_to? 'join'
    output += ' data-value='#{config[key].join(',')}''
  else
    output += ' data-value='#{config[key]}''
  end
  output += '></#{tag}>'
end
    
          if File.symlink?(code_path)
        return 'Code directory '#{code_path}' cannot be a symlink'
      end
    
        def render(context)
      output = super
      types = {
        '.mp4' => 'type='video/mp4; codecs=\'avc1.42E01E, mp4a.40.2\''',
        '.ogv' => 'type='video/ogg; codecs=theora, vorbis'',
        '.webm' => 'type='video/webm; codecs=vp8, vorbis''
      }
      if @videos.size > 0
        video =  '<video #{sizes} preload='metadata' controls #{poster}>'
        @videos.each do |v|
          video << '<source src='#{v}' #{types[File.extname(v)]}>'
        end
        video += '</video>'
      else
        'Error processing input, expected syntax: {% video url/to/video [url/to/video] [url/to/video] [width height] [url/to/poster] %}'
      end
    end
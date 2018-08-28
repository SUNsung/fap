
        
                def convert_direct_upload_option_to_url(options)
          if options.delete(:direct_upload) && respond_to?(:rails_direct_uploads_url)
            options['data-direct-upload-url'] = rails_direct_uploads_url
          end
          options
        end
    end
  end
end

    
              def generate_ids?
            !@skip_default_ids
          end
      end
    end
  end
end

    
    multitask :default => [:test, :features]
    
      </body>
</html>
HTML
CONTENT_NOT_CONTAINING = <<-HTML.freeze
<!DOCTYPE HTML>
<html lang='en-US'>
  <head>
<meta http-equiv='Content-Type' content='text/html; charset=UTF-8'>
    <meta charset='UTF-8'>
    <title>Jemoji</title>
    <meta name='viewport' content='width=device-width,initial-scale=1'>
    <link rel='stylesheet' href='/css/screen.css'>
  </head>
  <body class='wrap'>
    <p><img class='emoji' title=':+1:' alt=':+1:' src='https://assets.github.com/images/icons/emoji/unicode/1f44d.png' height='20' width='20' align='absmiddle'></p>
    
      p.action do |args, _|
    if args.empty?
      Jekyll.logger.error 'A subcommand is required.'
      puts p
      abort
    else
      subcommand = args.first
      unless p.has_command? subcommand
        Jekyll.logger.abort_with 'fatal: 'jekyll #{args.first}' could not' \
          ' be found. You may need to install the jekyll-#{args.first} gem' \
          ' or a related gem to be able to use this subcommand.'
      end
    end
  end
end

    
      def self.source_dir; SOURCE_DIR; end
end
    
        def render(options, screenshots)
      Dir.mktmpdir do |dir|
        path = generator.render(options, screenshots, dir)
        return File.read(path)
      end
    end
  end
    
          def self.return_value
        # If your method provides a return value, you can describe here what it does
      end
    
        # Pass a block which should be tracked. One block = one testcase
    # @param step_name (String) the name of the currently built code (e.g. snapshot, sigh, ...)
    #   This might be nil, in which case the step is not printed out to the terminal
    def self.execute_action(step_name)
      start = Time.now # before the raise block, since `start` is required in the ensure block
      UI.crash!('No block given') unless block_given?
    
          def self.category
        :misc
      end
    
          def self.authors
        ['lacostej']
      end
    
          #####################################################
      # @!group Documentation
      #####################################################
    
        filter
  end
    
            def template
          @template ||= Coverage::Template.new(self)
        end
    
          def image_url
        raise NotImplementedError
      end
    
      def existing
    existing_path = select(&File.method(:directory?))
    # return nil instead of empty PATH, to unset environment variables
    existing_path unless existing_path.empty?
  end
    
      # DBM stores ruby objects as a ruby `String`. Hence, when fetching the data,
  # to convert the ruby string back into a ruby `Hash`, the string is converted
  # into a JSON compatible string in `ruby_hash_to_json_string`, where it may
  # later be parsed by `JSON.parse` in the `json_string_to_ruby_hash` method
  #
  # @param  [Hash] ruby `Hash` to be converted to `JSON` string
  # @return [String]
  def ruby_hash_to_json_string(hash)
    hash.to_json
  end
    
          SystemCommand.run('/bin/mkdir', args: ['-p', path], sudo: sudo)
      SystemCommand.run('/bin/chmod', args: ['g+rwx', path], sudo: sudo)
      SystemCommand.run('/usr/sbin/chown', args: [Utils.current_user, path], sudo: sudo)
      SystemCommand.run('/usr/bin/chgrp', args: ['admin', path], sudo: sudo)
    end
    
        def add_warning(message)
      warnings << message
    end
    
    desc 'Default deploy task'
task :deploy do
  # Check if preview posts exist, which should not be published
  if File.exists?('.preview-mode')
    puts '## Found posts in preview mode, regenerating files ...'
    File.delete('.preview-mode')
    Rake::Task[:generate].execute
  end
    
          Dir.chdir(code_path) do
        code = file.read
        @filetype = file.extname.sub('.','') if @filetype.nil?
        title = @title ? '#{@title} (#{file.basename})' : file.basename
        url = '/#{code_dir}/#{@file}'
        source = '<figure class='code'><figcaption><span>#{title}</span> <a href='#{url}'>download</a></figcaption>\n'
        source += '#{HighlightCode::highlight(code, @filetype)}</figure>'
        TemplateWrapper::safe_wrap(source)
      end
    end
  end
    
      # Extracts raw content DIV from template, used for page description as {{ content }}
  # contains complete sub-template code on main page level
  def raw_content(input)
    /<div class='entry-content'>(?<content>[\s\S]*?)<\/div>\s*<(footer|\/article)>/ =~ input
    return (content.nil?) ? input : content
  end
    
          # This method depends on the fact that we have guarded
      # against implicit and empty literals.
      def opening_brace_on_same_line?(node)
        node.loc.begin.line == children(node).first.first_line
      end
    
            expect(new_source).to eq(<<-RUBY.strip_indent)
          def func
            [1, 2, 3].each do |n|
              puts n
            end
          end
        RUBY
      end
    
    module RuboCop
  module Cop
    module Style
      # This cop checks for redundant `begin` blocks.
      #
      # Currently it checks for code like this:
      #
      # @example
      #
      #   # bad
      #   def redundant
      #     begin
      #       ala
      #       bala
      #     rescue StandardError => e
      #       something
      #     end
      #   end
      #
      #   # good
      #   def preferred
      #     ala
      #     bala
      #   rescue StandardError => e
      #     something
      #   end
      #
      #   # bad
      #   # When using Ruby 2.5 or later.
      #   do_something do
      #     begin
      #       something
      #     rescue => ex
      #       anything
      #     end
      #   end
      #
      #   # good
      #   # In Ruby 2.5 or later, you can omit `begin` in `do-end` block.
      #   do_something do
      #     something
      #   rescue => ex
      #     anything
      #   end
      #
      #   # good
      #   # Stabby lambdas don't support implicit `begin` in `do-end` blocks.
      #   -> do
      #     begin
      #       foo
      #     rescue Bar
      #       baz
      #     end
      #   end
      class RedundantBegin < Cop
        MSG = 'Redundant `begin` block detected.'.freeze
    
          # Checks whether this node is an `unless` statement. (This is not true
      # of ternary operators and `if` statements.)
      #
      # @return [Boolean] whether the node is an `unless` statement
      def unless?
        keyword == 'unless'
      end
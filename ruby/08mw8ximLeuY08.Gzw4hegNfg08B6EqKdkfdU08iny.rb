
        
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
    
        # Whether the collection's documents ought to be written as individual
    #   files in the output.
    #
    # Returns true if the 'write' metadata is true, false otherwise.
    def write?
      !!metadata.fetch('output', false)
    end
    
            # Private: Watch for file changes and rebuild the site.
        #
        # site - A Jekyll::Site instance
        # options - A Hash of options passed to the command
        #
        # Returns nothing.
        def watch(site, options)
          # Warn Windows users that they might need to upgrade.
          if Utils::Platforms.bash_on_windows?
            Jekyll.logger.warn '',
                               'Auto-regeneration may not work on some Windows versions.'
            Jekyll.logger.warn '',
                               'Please see: https://github.com/Microsoft/BashOnWindows/issues/216'
            Jekyll.logger.warn '',
                               'If it does not work, please upgrade Bash on Windows or '\
                               'run Jekyll with --no-watch.'
          end
    
    module Jekyll
  module Commands
    class New < Command
      class << self
        def init_with_program(prog)
          prog.command(:new) do |c|
            c.syntax 'new PATH'
            c.description 'Creates a new Jekyll site scaffold in PATH'
    
                Jekyll.logger.debug 'LiveReload:', 'Reloading #{p.url}'
            Jekyll.logger.debug '', json_message
            @websockets.each { |ws| ws.send(json_message) }
          end
        end
    
          def initialize(config)
        Jekyll::External.require_with_graceful_fail 'kramdown' unless defined?(Kramdown)
        @config = config['kramdown'].dup || {}
        @config[:input] = :SmartyPants
      end
    
    namespace :db do
  namespace :migrate do
    desc 'Setup the db or migrate depending on state of db'
    task setup: :environment do
      begin
        if ActiveRecord::Migrator.current_version.zero?
          Rake::Task['db:migrate'].invoke
          Rake::Task['db:seed'].invoke
        end
      rescue ActiveRecord::NoDatabaseError
        Rake::Task['db:setup'].invoke
      else
        Rake::Task['db:migrate'].invoke
      end
    end
  end
    
      attributes :id, :type, :url, :preview_url,
             :remote_url, :text_url, :meta,
             :description
    
      def updated
    object.updated_at.iso8601
  end
    
      def perform(user_id)
    @user = User.find(user_id)
    deliver_digest if @user.allows_digest_emails?
  end
    
    def process_args
  until ARGV.empty?
    if ARGV.first =~ %r{^-+t(?:est)?$} && ARGV.length > 1
      ARGV.shift
      $opt_test = ARGV.shift
    elsif ARGV.first =~ %r{^-+h(?:elp)?$}
      puts usage
      exit 0
    else
      puts usage
      exit 1
    end
  end
end
    
    # configure the federation engine
DiasporaFederation.configure do |config|
  # the pod url
  config.server_uri = AppConfig.pod_uri
    
      def _nt_expression
    start_index = index
    if node_cache[:expression].has_key?(index)
      cached = node_cache[:expression][index]
      if cached
        cached = SyntaxNode.new(input, index...(index + 1)) if cached == true
        @index = cached.interval.end
      end
      return cached
    end
    
      def untar(tarball, &block)
    require 'archive/tar/minitar'
    tgz = Zlib::GzipReader.new(File.open(tarball))
    # Pull out typesdb
    tar = Archive::Tar::Minitar::Input.open(tgz)
    tar.each do |entry|
      path = block.call(entry)
      next if path.nil?
      parent = File.dirname(path)
    
            def has_column?
          @subject.column_names.include?('#{@attachment_name}_file_name')
        end
      end
    end
  end
end

    
            def failure_message_when_negated
          'Attachment #{@attachment_name} should not be required'
        end
        alias negative_failure_message failure_message_when_negated
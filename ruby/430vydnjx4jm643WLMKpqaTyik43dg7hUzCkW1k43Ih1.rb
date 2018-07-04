
        
          test 'permits empty params when received nil instead of hash' do
    sanitizer = sanitizer({ 'user' => nil })
    sanitized = sanitizer.sanitize(:sign_in)
    
        # Check if proper Lockable module methods are present & unlock strategy
    # allows to unlock resource on password reset
    def unlockable?(resource)
      resource.respond_to?(:unlock_access!) &&
        resource.respond_to?(:unlock_strategy_enabled?) &&
        resource.unlock_strategy_enabled?(:email)
    end
    
      # GET /resource/sign_in
  def new
    self.resource = resource_class.new(sign_in_params)
    clean_up_passwords(resource)
    yield resource if block_given?
    respond_with(resource, serialize_options(resource))
  end
    
          # Forgets the given resource by deleting a cookie
      def forget_me(resource)
        scope = Devise::Mapping.find_scope!(resource)
        resource.forget_me!
        cookies.delete(remember_key(resource, scope), forget_cookie_values(resource))
      end
    
          html_filters.push 'bootstrap/entries_v3', 'bootstrap/clean_html_v3'
    
        options[:skip_patterns] = [
      /\Afaq\//,
      /\Ainternals\//,
      /\Amisc\//,
      /\Areleases\//,
      /\A_/,
      /flattened\-index\.html/]
    
        BOOKS = %w(apache apc apcu array bc bzip2 calendar csprng classobj ctype curl
      datetime dba dir dom ds eio errorfunc ev event exec exif fileinfo filesystem filter
      ftp funchand gearman geoip gettext gmagick gmp hash ibase iconv iisfunc image
      imagick imap info inotify intl json judy ldap libevent libxml lua mail mailparse
      math mbstring mcrypt memcached misc mysqli network oauth openssl
      outcontrol password pcntl pcre pdo pgsql phar posix proctitle pthreads quickhash regex runkit
      reflection sca session sem session-pgsql shmop simplexml soap sockets solr sphinx spl
      spl-types sqlite3 sqlsrv ssh2 stats stream strings sync taint tidy tokenizer uodbc url
      v8js var varnish weakref xml xmlreader xmlrpc xmlwriter xsl yaf yar yaml zip zlib)
    
      def silence?
    staff? && !record.user&.staff?
  end
    
    describe Admin::BaseController, type: :controller do
  controller do
    def success
      render 'admin/reports/show'
    end
  end
    
      # After we load the schema, make sure we have sequences for each
  # table using timestamp IDs.
  Rake::Task['db:schema:load'].enhance do
    Rake::Task['db:ensure_id_sequences_exist'].invoke
  end
    
          # Returns the time the given Sass file was last modified.
      #
      # If the given file has been deleted or the time can't be accessed
      # for some other reason, this should return nil.
      #
      # @param uri [String] The URI of the file to check.
      #   Comes from a `:filename` option set on an engine returned by this importer.
      # @param options [{Symbol => Object}] Options for the Sass file
      #   containing the `@import` currently being checked.
      # @return [Time, nil]
      def mtime(uri, options)
        Sass::Util.abstract(self)
      end
    
          res = ''
      res << @before.to_sass(opts) if @before
      res << ' ' if @before && @whitespace_before
      res << '#{' unless @originally_text
      res << @mid.to_sass(opts)
      res << '}' unless @originally_text
      res << ' ' if @after && @whitespace_after
      res << @after.to_sass(opts) if @after
      res
    end
    
    class SinatraStaticServer < Sinatra::Base
    
        # Outputs the post.date as formatted html, with hooks for CSS styling.
    #
    #  +date+ is the date object to format as HTML.
    #
    # Returns string
    def date_to_html_string(date)
      result = '<span class='month'>' + date.strftime('%b').upcase + '</span> '
      result << date.strftime('<span class='day'>%d</span> ')
      result << date.strftime('<span class='year'>%Y</span> ')
      result
    end
    
    def config_tag(config, key, tag=nil, classname=nil)
  options     = key.split('.').map { |k| config[k] }.last #reference objects with dot notation
  tag       ||= 'div'
  classname ||= key.sub(/_/, '-').sub(/\./, '-')
  output      = '<#{tag} class='#{classname}''
    
    Liquid::Template.register_tag('include_array', Jekyll::IncludeArrayTag)

    
    module RuboCop
  module Cop
    module Style
      # This cop check for uses of Object#freeze on immutable objects.
      #
      # @example
      #   # bad
      #   CONST = 1.freeze
      #
      #   # good
      #   CONST = 1
      class RedundantFreeze < Cop
        include FrozenStringLiteral
    
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
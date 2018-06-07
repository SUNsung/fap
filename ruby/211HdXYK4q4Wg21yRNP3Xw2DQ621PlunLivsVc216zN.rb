
        
            version '1' do
      self.release = '1.12.6'
      self.base_url = 'http://coffeescript.org/v1/'
    
        def initial_urls
      [ 'https://hexdocs.pm/elixir/#{self.class.release}/api-reference.html',
        'https://hexdocs.pm/eex/#{self.class.release}/EEx.html',
        'https://hexdocs.pm/ex_unit/#{self.class.release}/ExUnit.html',
        'https://hexdocs.pm/iex/#{self.class.release}/IEx.html',
        'https://hexdocs.pm/logger/#{self.class.release}/Logger.html',
        'https://hexdocs.pm/mix/#{self.class.release}/Mix.html',
        'https://elixir-lang.org/getting-started/introduction.html' ]
    end
    
        html_filters.push 'node/clean_html', 'node/entries', 'title'
    
        self.name = 'PHP'
    self.type = 'php'
    self.release = '7.2.5'
    self.base_url = 'https://secure.php.net/manual/en/'
    self.root_path = 'index.html'
    self.initial_paths = %w(
      funcref.html
      langref.html
      refs.database.html
      set.mysqlinfo.html
      language.control-structures.html
      reference.pcre.pattern.syntax.html
      reserved.exceptions.html
      reserved.interfaces.html
      reserved.variables.html)
    
          super
    end
  end
end

    
        def scoped_accounts
      Account.unscoped.tap do |scope|
        scope.merge! with_usernames
        scope.merge! matching_username
        scope.merge! matching_domain
      end
    end
    
      def type
    'Emoji'
  end
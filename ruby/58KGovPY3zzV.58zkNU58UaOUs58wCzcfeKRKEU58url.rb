
        
            @services = current_user.services.reorder(table_sort).page(params[:page])
    
        options[:trailing_slash] = true
    
          options[:container] = '.container'
    end
  end
end

    
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
    
        options[:only_patterns] = [
      /\Abook\/first-edition\//,
      /\Areference\//,
      /\Acollections\//,
      /\Astd\// ]
    
        alias_method :blank?, :empty?
    
    module Docs
  class PageDb
    attr_reader :pages
    
      # Update version.rb file with BOOTSTRAP_SHA
  def store_version
    path    = 'lib/bootstrap-sass/version.rb'
    content = File.read(path).sub(/BOOTSTRAP_SHA\s*=\s*[''][\w]+['']/, 'BOOTSTRAP_SHA = '#@branch_sha'')
    File.open(path, 'w') { |f| f.write(content) }
  end
end

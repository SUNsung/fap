
        
          def create_gist(files, description)
    url = 'https://api.github.com/gists'
    data = { 'public' => true, 'files' => files, 'description' => description }
    scopes = GitHub::CREATE_GIST_SCOPES
    GitHub.open_api(url, data: data, scopes: scopes)['html_url']
  end
    
    desc 'Dumps output to a CSS file for testing'
task :debug do
  require 'sass'
  path = Bootstrap.stylesheets_path
  %w(bootstrap).each do |file|
    engine = Sass::Engine.for_file('#{path}/#{file}.scss', syntax: :scss, load_paths: [path])
    File.open('./#{file}.css', 'w') { |f| f.write(engine.render) }
  end
end
    
          spec['main'] =
          find_files.(File.join(Bootstrap.stylesheets_path, '_bootstrap.scss')) +
          find_files.(Bootstrap.fonts_path) +
          %w(assets/javascripts/bootstrap.js)
    
            private

        
            mkdir_p page_dir
    file = '#{page_dir}/#{filename}.#{extension}'
    if File.exist?(file)
      abort('rake aborted!') if ask('#{file} already exists. Do you want to overwrite?', ['y', 'n']) == 'n'
    end
    puts 'Creating new page: #{file}'
    open(file, 'w') do |page|
      page.puts '---'
      page.puts 'layout: page'
      page.puts 'title: \'#{title}\''
      page.puts 'date: #{Time.now.strftime('%Y-%m-%d %H:%M')}'
      page.puts 'comments: true'
      page.puts 'sharing: true'
      page.puts 'footer: true'
      page.puts '---'
    end
  else
    puts 'Syntax error: #{args.filename} contains unsupported characters'
  end
end
    
    module Jekyll
    
      context 'called with three colors' do
    it 'applies second color to left and right' do
      rule = 'border-color: #f00 #0f0 #00f'
    
      context 'called with auto' do
    it 'applies to auto to height' do
      rule = 'height: auto; width: 100px;'
    
      context 'expands plain text inputs' do
    it 'finds selectors' do
      list = @inputs_list.join(', ')
      ruleset = 'content: #{list};'
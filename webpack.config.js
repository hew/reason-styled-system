const path = require('path');
const HtmlWebpackPlugin = require('html-webpack-plugin');
const outputDir = path.join(__dirname, 'build/');

const isProd = process.env.NODE_ENV === 'production';

module.exports = {
  entry: './example/Index.bs.js',
  mode: isProd ? 'production' : 'development',
  output: {
    path: outputDir,
    filename: 'index.js'
  },
  plugins: [
    new HtmlWebpackPlugin({
      template: 'example/index.html',
      inject: false
    })
  ],
  devServer: {
    compress: true,
    contentBase: outputDir,
    port: process.env.PORT || 8000,
    historyApiFallback: true
  }
};
